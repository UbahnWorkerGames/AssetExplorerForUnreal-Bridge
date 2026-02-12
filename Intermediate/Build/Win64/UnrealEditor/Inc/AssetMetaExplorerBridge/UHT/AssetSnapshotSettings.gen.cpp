// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetSnapshotSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAssetSnapshotSettings() {}

// ********** Begin Cross Module References ********************************************************
ASSETMETAEXPLORERBRIDGE_API UClass* Z_Construct_UClass_UAssetSnapshotSettings();
ASSETMETAEXPLORERBRIDGE_API UClass* Z_Construct_UClass_UAssetSnapshotSettings_NoRegister();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_AssetMetaExplorerBridge();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAssetSnapshotSettings ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetSnapshotSettings;
UClass* UAssetSnapshotSettings::GetPrivateStaticClass()
{
	using TClass = UAssetSnapshotSettings;
	if (!Z_Registration_Info_UClass_UAssetSnapshotSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AssetSnapshotSettings"),
			Z_Registration_Info_UClass_UAssetSnapshotSettings.InnerSingleton,
			StaticRegisterNativesUAssetSnapshotSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAssetSnapshotSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetSnapshotSettings_NoRegister()
{
	return UAssetSnapshotSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetSnapshotSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Asset Meta Explorer Bridge" },
		{ "IncludePath", "AssetSnapshotSettings.h" },
		{ "ModuleRelativePath", "Public/AssetSnapshotSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportBaseUrl_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/AssetSnapshotSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportListenPort_MetaData[] = {
		{ "Category", "Import" },
		{ "ClampMax", "65535" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/AssetSnapshotSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAssetSnapshotSettings constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImportBaseUrl;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ImportListenPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAssetSnapshotSettings constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetSnapshotSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAssetSnapshotSettings_Statics

// ********** Begin Class UAssetSnapshotSettings Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetSnapshotSettings_Statics::NewProp_ImportBaseUrl = { "ImportBaseUrl", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetSnapshotSettings, ImportBaseUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportBaseUrl_MetaData), NewProp_ImportBaseUrl_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAssetSnapshotSettings_Statics::NewProp_ImportListenPort = { "ImportListenPort", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetSnapshotSettings, ImportListenPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportListenPort_MetaData), NewProp_ImportListenPort_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetSnapshotSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetSnapshotSettings_Statics::NewProp_ImportBaseUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetSnapshotSettings_Statics::NewProp_ImportListenPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetSnapshotSettings_Statics::PropPointers) < 2048);
// ********** End Class UAssetSnapshotSettings Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UAssetSnapshotSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_AssetMetaExplorerBridge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetSnapshotSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetSnapshotSettings_Statics::ClassParams = {
	&UAssetSnapshotSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetSnapshotSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetSnapshotSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetSnapshotSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetSnapshotSettings_Statics::Class_MetaDataParams)
};
void UAssetSnapshotSettings::StaticRegisterNativesUAssetSnapshotSettings()
{
}
UClass* Z_Construct_UClass_UAssetSnapshotSettings()
{
	if (!Z_Registration_Info_UClass_UAssetSnapshotSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetSnapshotSettings.OuterSingleton, Z_Construct_UClass_UAssetSnapshotSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetSnapshotSettings.OuterSingleton;
}
UAssetSnapshotSettings::UAssetSnapshotSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAssetSnapshotSettings);
UAssetSnapshotSettings::~UAssetSnapshotSettings() {}
// ********** End Class UAssetSnapshotSettings *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotSettings_h__Script_AssetMetaExplorerBridge_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetSnapshotSettings, UAssetSnapshotSettings::StaticClass, TEXT("UAssetSnapshotSettings"), &Z_Registration_Info_UClass_UAssetSnapshotSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetSnapshotSettings), 2604375369U) },
	};
}; // Z_CompiledInDeferFile_FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotSettings_h__Script_AssetMetaExplorerBridge_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotSettings_h__Script_AssetMetaExplorerBridge_3120399234{
	TEXT("/Script/AssetMetaExplorerBridge"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotSettings_h__Script_AssetMetaExplorerBridge_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotSettings_h__Script_AssetMetaExplorerBridge_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
