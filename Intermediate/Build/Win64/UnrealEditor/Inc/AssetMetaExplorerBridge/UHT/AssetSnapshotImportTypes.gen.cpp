// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetSnapshotImportTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAssetSnapshotImportTypes() {}

// ********** Begin Cross Module References ********************************************************
ASSETMETAEXPLORERBRIDGE_API UEnum* Z_Construct_UEnum_AssetMetaExplorerBridge_EAssetSnapshotImportMode();
UPackage* Z_Construct_UPackage__Script_AssetMetaExplorerBridge();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAssetSnapshotImportMode **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetSnapshotImportMode;
static UEnum* EAssetSnapshotImportMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAssetSnapshotImportMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAssetSnapshotImportMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AssetMetaExplorerBridge_EAssetSnapshotImportMode, (UObject*)Z_Construct_UPackage__Script_AssetMetaExplorerBridge(), TEXT("EAssetSnapshotImportMode"));
	}
	return Z_Registration_Info_UEnum_EAssetSnapshotImportMode.OuterSingleton;
}
template<> ASSETMETAEXPLORERBRIDGE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAssetSnapshotImportMode>()
{
	return EAssetSnapshotImportMode_StaticEnum();
}
struct Z_Construct_UEnum_AssetMetaExplorerBridge_EAssetSnapshotImportMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AssetSnapshotImportTypes.h" },
		{ "OverrideExisting.DisplayName", "Override Existing" },
		{ "OverrideExisting.Name", "EAssetSnapshotImportMode::OverrideExisting" },
		{ "SkipExisting.DisplayName", "Skip Existing" },
		{ "SkipExisting.Name", "EAssetSnapshotImportMode::SkipExisting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAssetSnapshotImportMode::OverrideExisting", (int64)EAssetSnapshotImportMode::OverrideExisting },
		{ "EAssetSnapshotImportMode::SkipExisting", (int64)EAssetSnapshotImportMode::SkipExisting },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_AssetMetaExplorerBridge_EAssetSnapshotImportMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AssetMetaExplorerBridge_EAssetSnapshotImportMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AssetMetaExplorerBridge,
	nullptr,
	"EAssetSnapshotImportMode",
	"EAssetSnapshotImportMode",
	Z_Construct_UEnum_AssetMetaExplorerBridge_EAssetSnapshotImportMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AssetMetaExplorerBridge_EAssetSnapshotImportMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AssetMetaExplorerBridge_EAssetSnapshotImportMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AssetMetaExplorerBridge_EAssetSnapshotImportMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AssetMetaExplorerBridge_EAssetSnapshotImportMode()
{
	if (!Z_Registration_Info_UEnum_EAssetSnapshotImportMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetSnapshotImportMode.InnerSingleton, Z_Construct_UEnum_AssetMetaExplorerBridge_EAssetSnapshotImportMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAssetSnapshotImportMode.InnerSingleton;
}
// ********** End Enum EAssetSnapshotImportMode ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotImportTypes_h__Script_AssetMetaExplorerBridge_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAssetSnapshotImportMode_StaticEnum, TEXT("EAssetSnapshotImportMode"), &Z_Registration_Info_UEnum_EAssetSnapshotImportMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3665345639U) },
	};
}; // Z_CompiledInDeferFile_FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotImportTypes_h__Script_AssetMetaExplorerBridge_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotImportTypes_h__Script_AssetMetaExplorerBridge_1311740059{
	TEXT("/Script/AssetMetaExplorerBridge"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotImportTypes_h__Script_AssetMetaExplorerBridge_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotImportTypes_h__Script_AssetMetaExplorerBridge_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
