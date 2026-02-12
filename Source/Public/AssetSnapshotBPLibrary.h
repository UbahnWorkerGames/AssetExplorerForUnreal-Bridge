#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "AssetSnapshotImportTypes.h"
#include "AssetSnapshotBPLibrary.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FAssetSnapshotImportResult, bool, bSuccess, const FString&, ErrorMessage);
DECLARE_DELEGATE_TwoParams(FAssetSnapshotImportResultNative, bool, const FString&);

UCLASS()
class ASSETMETAEXPLORERBRIDGE_API UAssetSnapshotBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /** Default export root: <ProjectRoot>/export */
    UFUNCTION(BlueprintCallable, Category="AssetSnapshot")
    static FString GetDefaultExportRoot();

    /**
     * Exports all assets under a /Game path OR a single asset.
     * Examples:
     *   /Game/SomeFolder
     *   /Game/Props/SM_Box.SM_Box
     * Optional type include filter examples: "animation", "mesh", "staticmesh", "skeletalmesh",
     * "material", "blueprint", "niagara" (comma/space/pipe separated).
     * Optional exclude filter uses the same tokens.
     * Returns: number of exported builds.
     */
    UFUNCTION(BlueprintCallable, CallInEditor, Category="AssetSnapshot")
    static int32 ExportPathBuilds(const FString& InGamePath, const FString& InTypeFilter = TEXT(""), const FString& InExcludeTypeFilter = TEXT(""));

    /** Export a single already-loaded asset. Returns true on success. */
    UFUNCTION(BlueprintCallable, CallInEditor, Category="AssetSnapshot")
    static bool ExportAssetBuild(UObject* Asset);

    /** Import all files from a snapshot zip into the project Content directory. */
    UFUNCTION(BlueprintCallable, CallInEditor, Category="AssetSnapshot")
    static bool ImportSnapshotZip(const FString& ZipPath, EAssetSnapshotImportMode Mode, FString& OutError);

    /**
     * Downloads download/{id}.zip from the configured server and imports it into Content.
     * Uses the settings in Asset Snapshot config (see Project Settings).
     */
    UFUNCTION(BlueprintCallable, CallInEditor, Category="AssetSnapshot")
    static void DownloadAndImportSnapshot(const FString& SnapshotId, EAssetSnapshotImportMode Mode, const FAssetSnapshotImportResult& OnComplete);

    /** Native version for C++ (non-dynamic delegate). */
    static void DownloadAndImportSnapshotNative(const FString& SnapshotId, EAssetSnapshotImportMode Mode, const FAssetSnapshotImportResultNative& OnComplete);
};
