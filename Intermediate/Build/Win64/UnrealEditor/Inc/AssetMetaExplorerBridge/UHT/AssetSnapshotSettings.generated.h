// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetSnapshotSettings.h"

#ifdef ASSETMETAEXPLORERBRIDGE_AssetSnapshotSettings_generated_h
#error "AssetSnapshotSettings.generated.h already included, missing '#pragma once' in AssetSnapshotSettings.h"
#endif
#define ASSETMETAEXPLORERBRIDGE_AssetSnapshotSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetSnapshotSettings ***************************************************
struct Z_Construct_UClass_UAssetSnapshotSettings_Statics;
ASSETMETAEXPLORERBRIDGE_API UClass* Z_Construct_UClass_UAssetSnapshotSettings_NoRegister();

#define FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotSettings_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetSnapshotSettings(); \
	friend struct ::Z_Construct_UClass_UAssetSnapshotSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETMETAEXPLORERBRIDGE_API UClass* ::Z_Construct_UClass_UAssetSnapshotSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetSnapshotSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AssetMetaExplorerBridge"), Z_Construct_UClass_UAssetSnapshotSettings_NoRegister) \
	DECLARE_SERIALIZER(UAssetSnapshotSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotSettings_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetSnapshotSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetSnapshotSettings(UAssetSnapshotSettings&&) = delete; \
	UAssetSnapshotSettings(const UAssetSnapshotSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetSnapshotSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetSnapshotSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetSnapshotSettings) \
	NO_API virtual ~UAssetSnapshotSettings();


#define FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotSettings_h_7_PROLOG
#define FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotSettings_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotSettings_h_10_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotSettings_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetSnapshotSettings;

// ********** End Class UAssetSnapshotSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
