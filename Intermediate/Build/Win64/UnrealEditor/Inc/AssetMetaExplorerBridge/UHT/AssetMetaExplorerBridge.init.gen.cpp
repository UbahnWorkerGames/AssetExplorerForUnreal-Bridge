// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetMetaExplorerBridge_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	ASSETMETAEXPLORERBRIDGE_API UFunction* Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AssetMetaExplorerBridge;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AssetMetaExplorerBridge()
	{
		if (!Z_Registration_Info_UPackage__Script_AssetMetaExplorerBridge.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/AssetMetaExplorerBridge",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000040,
			0xB9A6056F,
			0xE18D8747,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AssetMetaExplorerBridge.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_AssetMetaExplorerBridge.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AssetMetaExplorerBridge(Z_Construct_UPackage__Script_AssetMetaExplorerBridge, TEXT("/Script/AssetMetaExplorerBridge"), Z_Registration_Info_UPackage__Script_AssetMetaExplorerBridge, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB9A6056F, 0xE18D8747));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
