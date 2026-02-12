#include "AssetMetaExplorerBridgeModule.h"

#include "AssetSnapshotBPLibrary.h"
#include "AssetSnapshotSettings.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"
#include "Misc/Paths.h"
#include "HAL/IConsoleManager.h"
#include "Logging/LogMacros.h"
#include "ISettingsModule.h"
#include "ISettingsSection.h"
#include "HttpServerModule.h"
#include "IHttpRouter.h"
#include "HttpRequestHandler.h"
#include "HttpServerRequest.h"
#include "HttpServerResponse.h"
#include "HAL/PlatformMisc.h"

DEFINE_LOG_CATEGORY_STATIC(LogAssetMetaExplorerBridge, Log, All);

#define LOCTEXT_NAMESPACE "AssetMetaExplorerBridgeModule"

static IConsoleObject* GAssetSnapshotExportCmd = nullptr;

void FAssetMetaExplorerBridgeModule::StartupModule()
{
    // aeb /Game/SomeFolder  OR  aeb /Game/SomeAsset.SomeAsset
    GAssetSnapshotExportCmd = IConsoleManager::Get().RegisterConsoleCommand(
        TEXT("aeb"),
        TEXT("Exports asset snapshot builds (zip with meta.json + preview images). Usage: aeb <AssetOrFolderPath> [TypeFilter] [-i ExcludeTypes] [-exit]"),
        FConsoleCommandWithArgsDelegate::CreateLambda([](const TArray<FString>& Args)
        {
            if (Args.Num() < 1)
            {
                UE_LOG(LogAssetMetaExplorerBridge, Display, TEXT("Usage: aeb <AssetOrFolderPath> [TypeFilter] [-exit]"));
                UE_LOG(LogAssetMetaExplorerBridge, Display, TEXT("Example folder: aeb /Game/byHans1"));
                UE_LOG(LogAssetMetaExplorerBridge, Display, TEXT("Example asset : aeb /Game/Props/SM_Box.SM_Box"));
                UE_LOG(LogAssetMetaExplorerBridge, Display, TEXT("Exclude types : aeb /Game -i \"Material,MaterialInstance\""));
                UE_LOG(LogAssetMetaExplorerBridge, Display, TEXT("TypeFilter examples: animation, mesh, staticmesh, skeletalmesh, material, blueprint, niagara"));
                return;
            }

            const FString InPath = Args[0];
            FString TypeFilter;
            FString ExcludeFilter;
            bool bExitAfter = false;
            for (int32 Index = 1; Index < Args.Num(); ++Index)
            {
                const FString Arg = Args[Index];
                if (Arg == TEXT("-i") || Arg == TEXT("-ignore") || Arg == TEXT("--ignore") || Arg == TEXT("--exclude"))
                {
                    if (Index + 1 < Args.Num())
                    {
                        ExcludeFilter = Args[Index + 1];
                        ++Index;
                    }
                    continue;
                }

                if (Arg.StartsWith(TEXT("-i=")) || Arg.StartsWith(TEXT("-ignore=")) || Arg.StartsWith(TEXT("--ignore=")) || Arg.StartsWith(TEXT("--exclude=")))
                {
                    const int32 Eq = Arg.Find(TEXT("="));
                    ExcludeFilter = Arg.Mid(Eq + 1);
                    continue;
                }

                if (Arg == TEXT("-t") || Arg == TEXT("--type") || Arg == TEXT("-include") || Arg == TEXT("--include"))
                {
                    if (Index + 1 < Args.Num())
                    {
                        TypeFilter = Args[Index + 1];
                        ++Index;
                    }
                    continue;
                }

                if (Arg == TEXT("-exit") || Arg == TEXT("--exit"))
                {
                    bExitAfter = true;
                    continue;
                }

                if (!Arg.StartsWith(TEXT("-")) && TypeFilter.IsEmpty())
                {
                    TypeFilter = Arg;
                }
            }

            const int32 Count = UAssetSnapshotBPLibrary::ExportPathBuilds(InPath, TypeFilter, ExcludeFilter);
            UE_LOG(LogAssetMetaExplorerBridge, Display, TEXT("aeb finished. Exported %d build(s). Output: %s (plus per-top-folder subdirs)"), Count, *UAssetSnapshotBPLibrary::GetDefaultExportRoot());

            if (bExitAfter)
            {
                UE_LOG(LogAssetMetaExplorerBridge, Display, TEXT("aeb -exit requested. Closing editor."));
                FPlatformMisc::RequestExit(false);
            }
        }),
        ECVF_Default);

    if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
    {
        SettingsModule->RegisterSettings(
            "Editor",
            "Plugins",
            "Asset Meta Explorer Bridge",
            LOCTEXT("AssetSnapshotSettingsName", "Asset Meta Explorer Bridge"),
            LOCTEXT("AssetSnapshotSettingsDesc", "Settings for the Asset Meta Explorer Bridge plugin."),
            GetMutableDefault<UAssetSnapshotSettings>());
    }

    UAssetSnapshotSettings* Settings = GetMutableDefault<UAssetSnapshotSettings>();
    if (Settings)
    {
        Settings->ReloadConfig();
        UE_LOG(
            LogAssetMetaExplorerBridge,
            Log,
            TEXT("AssetSnapshot settings: ImportBaseUrl=%s ListenPort=%d"),
            *Settings->ImportBaseUrl,
            Settings->ImportListenPort);
    }
    ListenPort = Settings ? Settings->ImportListenPort : 0;
    if (ListenPort > 0)
    {
        HttpRouter = FHttpServerModule::Get().GetHttpRouter(ListenPort);
        if (HttpRouter.IsValid())
        {
            ImportRouteHandle = HttpRouter->BindRoute(
                FHttpPath(TEXT("/asset-import")),
                EHttpServerRequestVerbs::VERB_GET,
                FHttpRequestHandler::CreateLambda(
                    [](const FHttpServerRequest& Request, const FHttpResultCallback& OnComplete)
                    {
                        const FString* Id = Request.QueryParams.Find(TEXT("id"));
                        if (!Id || Id->IsEmpty())
                        {
                            TUniquePtr<FHttpServerResponse> Resp = FHttpServerResponse::Create(
                                TEXT("{\"ok\":false,\"error\":\"missing id\"}"),
                                TEXT("application/json"));
                            Resp->Code = EHttpServerResponseCodes::BadRequest;
                            Resp->Headers.Add(TEXT("Access-Control-Allow-Origin"), { TEXT("*") });
                            OnComplete(MoveTemp(Resp));
                            return true;
                        }

                        const UAssetSnapshotSettings* LocalSettings = GetDefault<UAssetSnapshotSettings>();
                        EAssetSnapshotImportMode Mode = EAssetSnapshotImportMode::OverrideExisting;
                        if (const FString* ModeStr = Request.QueryParams.Find(TEXT("mode")))
                        {
                            const FString Lower = ModeStr->ToLower();
                            if (Lower == TEXT("skip") || Lower == TEXT("no-override") || Lower == TEXT("nooverride"))
                            {
                                Mode = EAssetSnapshotImportMode::SkipExisting;
                            }
                            else if (Lower == TEXT("override"))
                            {
                                Mode = EAssetSnapshotImportMode::OverrideExisting;
                            }
                        }

                        FAssetSnapshotImportResultNative OnDone;
                        OnDone.BindLambda([OnComplete](bool bOk, const FString& Error)
                        {
                            FString Body;
                            if (bOk)
                            {
                                Body = TEXT("{\"ok\":true}");
                            }
                            else
                            {
                                FString Escaped = Error;
                                Escaped.ReplaceInline(TEXT("\\"), TEXT("\\\\"));
                                Escaped.ReplaceInline(TEXT("\""), TEXT("\\\""));
                                Body = FString::Printf(TEXT("{\"ok\":false,\"error\":\"%s\"}"), *Escaped);
                            }

                            TUniquePtr<FHttpServerResponse> Resp = FHttpServerResponse::Create(Body, TEXT("application/json"));
                            Resp->Code = bOk ? EHttpServerResponseCodes::Ok : EHttpServerResponseCodes::ServerError;
                            Resp->Headers.Add(TEXT("Access-Control-Allow-Origin"), { TEXT("*") });
                            OnComplete(MoveTemp(Resp));
                        });

                        UAssetSnapshotBPLibrary::DownloadAndImportSnapshotNative(*Id, Mode, OnDone);
                        return true;
                    }));
            bImportRouteRegistered = true;

            ImportOptionsRouteHandle = HttpRouter->BindRoute(
                FHttpPath(TEXT("/asset-import")),
                EHttpServerRequestVerbs::VERB_OPTIONS,
                FHttpRequestHandler::CreateLambda(
                    [](const FHttpServerRequest& Request, const FHttpResultCallback& OnComplete)
                    {
                        TUniquePtr<FHttpServerResponse> Resp = FHttpServerResponse::Create(TEXT(""), TEXT("text/plain"));
                        Resp->Code = EHttpServerResponseCodes::NoContent;
                        Resp->Headers.Add(TEXT("Access-Control-Allow-Origin"), { TEXT("*") });
                        Resp->Headers.Add(TEXT("Access-Control-Allow-Methods"), { TEXT("GET, OPTIONS") });
                        Resp->Headers.Add(TEXT("Access-Control-Allow-Headers"), { TEXT("Content-Type") });
                        OnComplete(MoveTemp(Resp));
                        return true;
                    }));
            bImportOptionsRouteRegistered = true;

            SelectRouteHandle = HttpRouter->BindRoute(
                FHttpPath(TEXT("/asset-select")),
                EHttpServerRequestVerbs::VERB_GET,
                FHttpRequestHandler::CreateLambda(
                    [](const FHttpServerRequest& Request, const FHttpResultCallback& OnComplete)
                    {
                        const FString* PathParam = Request.QueryParams.Find(TEXT("path"));
                        if (!PathParam || PathParam->IsEmpty())
                        {
                            TUniquePtr<FHttpServerResponse> Resp = FHttpServerResponse::Create(
                                TEXT("{\"ok\":false,\"error\":\"missing path\"}"),
                                TEXT("application/json"));
                            Resp->Code = EHttpServerResponseCodes::BadRequest;
                            Resp->Headers.Add(TEXT("Access-Control-Allow-Origin"), { TEXT("*") });
                            OnComplete(MoveTemp(Resp));
                            return true;
                        }

                        const FString ObjectPath = *PathParam;
                        FAssetRegistryModule& ARM = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
                        const FAssetData AssetData = ARM.Get().GetAssetByObjectPath(FSoftObjectPath(ObjectPath));
                        if (!AssetData.IsValid())
                        {
                            TUniquePtr<FHttpServerResponse> Resp = FHttpServerResponse::Create(
                                TEXT("{\"ok\":false,\"error\":\"asset not found\"}"),
                                TEXT("application/json"));
                            Resp->Code = EHttpServerResponseCodes::NotFound;
                            Resp->Headers.Add(TEXT("Access-Control-Allow-Origin"), { TEXT("*") });
                            OnComplete(MoveTemp(Resp));
                            return true;
                        }

                        FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
                        TArray<FAssetData> Assets;
                        Assets.Add(AssetData);
                        ContentBrowserModule.Get().SyncBrowserToAssets(Assets);

                        TUniquePtr<FHttpServerResponse> Resp = FHttpServerResponse::Create(
                            TEXT("{\"ok\":true}"),
                            TEXT("application/json"));
                        Resp->Code = EHttpServerResponseCodes::Ok;
                        Resp->Headers.Add(TEXT("Access-Control-Allow-Origin"), { TEXT("*") });
                        OnComplete(MoveTemp(Resp));
                        return true;
                    }));
            bSelectRouteRegistered = true;

            FHttpServerModule::Get().StartAllListeners();
            UE_LOG(LogAssetMetaExplorerBridge, Log, TEXT("AssetSnapshot HTTP import listener started on port %d"), ListenPort);
        }
        else
        {
            UE_LOG(LogAssetMetaExplorerBridge, Warning, TEXT("Failed to get HTTP router for port %d"), ListenPort);
        }
    }

    UE_LOG(LogAssetMetaExplorerBridge, Log, TEXT("AssetMetaExplorerBridge module started."));
}

void FAssetMetaExplorerBridgeModule::ShutdownModule()
{
    if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
    {
        SettingsModule->UnregisterSettings("Editor", "Plugins", "Asset Meta Explorer Bridge");
    }

    if (GAssetSnapshotExportCmd)
    {
        IConsoleManager::Get().UnregisterConsoleObject(GAssetSnapshotExportCmd);
        GAssetSnapshotExportCmd = nullptr;
    }

    if (HttpRouter.IsValid())
    {
        if (bImportRouteRegistered)
        {
            HttpRouter->UnbindRoute(ImportRouteHandle);
            bImportRouteRegistered = false;
        }
        if (bImportOptionsRouteRegistered)
        {
            HttpRouter->UnbindRoute(ImportOptionsRouteHandle);
            bImportOptionsRouteRegistered = false;
        }
        if (bSelectRouteRegistered)
        {
            HttpRouter->UnbindRoute(SelectRouteHandle);
            bSelectRouteRegistered = false;
        }
        HttpRouter.Reset();
        FHttpServerModule::Get().StopAllListeners();
    }

    UE_LOG(LogAssetMetaExplorerBridge, Log, TEXT("AssetMetaExplorerBridge module shutdown."));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FAssetMetaExplorerBridgeModule, AssetMetaExplorerBridge)
