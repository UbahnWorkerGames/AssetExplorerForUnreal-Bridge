#pragma once

#include "HttpRouteHandle.h"
#include "Modules/ModuleManager.h"

class FAssetMetaExplorerBridgeModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

private:
    TSharedPtr<class IHttpRouter> HttpRouter;
    FHttpRouteHandle ImportRouteHandle;
    FHttpRouteHandle ImportOptionsRouteHandle;
    FHttpRouteHandle SelectRouteHandle;
    int32 ListenPort = 0;
    bool bImportRouteRegistered = false;
    bool bImportOptionsRouteRegistered = false;
    bool bSelectRouteRegistered = false;
};
