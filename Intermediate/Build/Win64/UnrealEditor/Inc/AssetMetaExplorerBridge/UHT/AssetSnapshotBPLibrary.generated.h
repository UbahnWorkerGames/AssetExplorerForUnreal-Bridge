// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetSnapshotBPLibrary.h"

#ifdef ASSETMETAEXPLORERBRIDGE_AssetSnapshotBPLibrary_generated_h
#error "AssetSnapshotBPLibrary.generated.h already included, missing '#pragma once' in AssetSnapshotBPLibrary.h"
#endif
#define ASSETMETAEXPLORERBRIDGE_AssetSnapshotBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EAssetSnapshotImportMode : uint8;

// ********** Begin Delegate FAssetSnapshotImportResult ********************************************
#define FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotBPLibrary_h_7_DELEGATE \
ASSETMETAEXPLORERBRIDGE_API void FAssetSnapshotImportResult_DelegateWrapper(const FScriptDelegate& AssetSnapshotImportResult, bool bSuccess, const FString& ErrorMessage);


// ********** End Delegate FAssetSnapshotImportResult **********************************************

// ********** Begin Class UAssetSnapshotBPLibrary **************************************************
#define FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotBPLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDownloadAndImportSnapshot); \
	DECLARE_FUNCTION(execImportSnapshotZip); \
	DECLARE_FUNCTION(execExportAssetBuild); \
	DECLARE_FUNCTION(execExportPathBuilds); \
	DECLARE_FUNCTION(execGetDefaultExportRoot);


struct Z_Construct_UClass_UAssetSnapshotBPLibrary_Statics;
ASSETMETAEXPLORERBRIDGE_API UClass* Z_Construct_UClass_UAssetSnapshotBPLibrary_NoRegister();

#define FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotBPLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetSnapshotBPLibrary(); \
	friend struct ::Z_Construct_UClass_UAssetSnapshotBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETMETAEXPLORERBRIDGE_API UClass* ::Z_Construct_UClass_UAssetSnapshotBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetSnapshotBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AssetMetaExplorerBridge"), Z_Construct_UClass_UAssetSnapshotBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAssetSnapshotBPLibrary)


#define FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotBPLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetSnapshotBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetSnapshotBPLibrary(UAssetSnapshotBPLibrary&&) = delete; \
	UAssetSnapshotBPLibrary(const UAssetSnapshotBPLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetSnapshotBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetSnapshotBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetSnapshotBPLibrary) \
	NO_API virtual ~UAssetSnapshotBPLibrary();


#define FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotBPLibrary_h_10_PROLOG
#define FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotBPLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotBPLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotBPLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotBPLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetSnapshotBPLibrary;

// ********** End Class UAssetSnapshotBPLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
