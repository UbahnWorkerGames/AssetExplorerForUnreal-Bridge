// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetSnapshotBPLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAssetSnapshotBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
ASSETMETAEXPLORERBRIDGE_API UClass* Z_Construct_UClass_UAssetSnapshotBPLibrary();
ASSETMETAEXPLORERBRIDGE_API UClass* Z_Construct_UClass_UAssetSnapshotBPLibrary_NoRegister();
ASSETMETAEXPLORERBRIDGE_API UEnum* Z_Construct_UEnum_AssetMetaExplorerBridge_EAssetSnapshotImportMode();
ASSETMETAEXPLORERBRIDGE_API UFunction* Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AssetMetaExplorerBridge();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FAssetSnapshotImportResult ********************************************
struct Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature_Statics
{
	struct _Script_AssetMetaExplorerBridge_eventAssetSnapshotImportResult_Parms
	{
		bool bSuccess;
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetSnapshotBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FAssetSnapshotImportResult constinit property declarations ************
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FAssetSnapshotImportResult constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FAssetSnapshotImportResult Property Definitions ***********************
void Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_AssetMetaExplorerBridge_eventAssetSnapshotImportResult_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AssetMetaExplorerBridge_eventAssetSnapshotImportResult_Parms), &Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AssetMetaExplorerBridge_eventAssetSnapshotImportResult_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FAssetSnapshotImportResult Property Definitions *************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AssetMetaExplorerBridge, nullptr, "AssetSnapshotImportResult__DelegateSignature", 	Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature_Statics::_Script_AssetMetaExplorerBridge_eventAssetSnapshotImportResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature_Statics::_Script_AssetMetaExplorerBridge_eventAssetSnapshotImportResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAssetSnapshotImportResult_DelegateWrapper(const FScriptDelegate& AssetSnapshotImportResult, bool bSuccess, const FString& ErrorMessage)
{
	struct _Script_AssetMetaExplorerBridge_eventAssetSnapshotImportResult_Parms
	{
		bool bSuccess;
		FString ErrorMessage;
	};
	_Script_AssetMetaExplorerBridge_eventAssetSnapshotImportResult_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.ErrorMessage=ErrorMessage;
	AssetSnapshotImportResult.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FAssetSnapshotImportResult **********************************************

// ********** Begin Class UAssetSnapshotBPLibrary Function DownloadAndImportSnapshot ***************
struct Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics
{
	struct AssetSnapshotBPLibrary_eventDownloadAndImportSnapshot_Parms
	{
		FString SnapshotId;
		EAssetSnapshotImportMode Mode;
		FScriptDelegate OnComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetSnapshot" },
		{ "Comment", "/**\n     * Downloads download/{id}.zip from the configured server and imports it into Content.\n     * Uses the settings in Asset Snapshot config (see Project Settings).\n     */" },
		{ "ModuleRelativePath", "Public/AssetSnapshotBPLibrary.h" },
		{ "ToolTip", "Downloads download/{id}.zip from the configured server and imports it into Content.\nUses the settings in Asset Snapshot config (see Project Settings)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DownloadAndImportSnapshot constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SnapshotId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DownloadAndImportSnapshot constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DownloadAndImportSnapshot Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics::NewProp_SnapshotId = { "SnapshotId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetSnapshotBPLibrary_eventDownloadAndImportSnapshot_Parms, SnapshotId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotId_MetaData), NewProp_SnapshotId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetSnapshotBPLibrary_eventDownloadAndImportSnapshot_Parms, Mode), Z_Construct_UEnum_AssetMetaExplorerBridge_EAssetSnapshotImportMode, METADATA_PARAMS(0, nullptr) }; // 3665345639
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetSnapshotBPLibrary_eventDownloadAndImportSnapshot_Parms, OnComplete), Z_Construct_UDelegateFunction_AssetMetaExplorerBridge_AssetSnapshotImportResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 2998781662
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics::NewProp_SnapshotId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics::PropPointers) < 2048);
// ********** End Function DownloadAndImportSnapshot Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetSnapshotBPLibrary, nullptr, "DownloadAndImportSnapshot", 	Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics::AssetSnapshotBPLibrary_eventDownloadAndImportSnapshot_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics::AssetSnapshotBPLibrary_eventDownloadAndImportSnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetSnapshotBPLibrary::execDownloadAndImportSnapshot)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SnapshotId);
	P_GET_ENUM(EAssetSnapshotImportMode,Z_Param_Mode);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAssetSnapshotBPLibrary::DownloadAndImportSnapshot(Z_Param_SnapshotId,EAssetSnapshotImportMode(Z_Param_Mode),FAssetSnapshotImportResult(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// ********** End Class UAssetSnapshotBPLibrary Function DownloadAndImportSnapshot *****************

// ********** Begin Class UAssetSnapshotBPLibrary Function ExportAssetBuild ************************
struct Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild_Statics
{
	struct AssetSnapshotBPLibrary_eventExportAssetBuild_Parms
	{
		UObject* Asset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetSnapshot" },
		{ "Comment", "/** Export a single already-loaded asset. Returns true on success. */" },
		{ "ModuleRelativePath", "Public/AssetSnapshotBPLibrary.h" },
		{ "ToolTip", "Export a single already-loaded asset. Returns true on success." },
	};
#endif // WITH_METADATA

// ********** Begin Function ExportAssetBuild constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExportAssetBuild constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExportAssetBuild Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetSnapshotBPLibrary_eventExportAssetBuild_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetSnapshotBPLibrary_eventExportAssetBuild_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetSnapshotBPLibrary_eventExportAssetBuild_Parms), &Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild_Statics::PropPointers) < 2048);
// ********** End Function ExportAssetBuild Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetSnapshotBPLibrary, nullptr, "ExportAssetBuild", 	Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild_Statics::AssetSnapshotBPLibrary_eventExportAssetBuild_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild_Statics::AssetSnapshotBPLibrary_eventExportAssetBuild_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetSnapshotBPLibrary::execExportAssetBuild)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAssetSnapshotBPLibrary::ExportAssetBuild(Z_Param_Asset);
	P_NATIVE_END;
}
// ********** End Class UAssetSnapshotBPLibrary Function ExportAssetBuild **************************

// ********** Begin Class UAssetSnapshotBPLibrary Function ExportPathBuilds ************************
struct Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics
{
	struct AssetSnapshotBPLibrary_eventExportPathBuilds_Parms
	{
		FString InGamePath;
		FString InTypeFilter;
		FString InExcludeTypeFilter;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetSnapshot" },
		{ "Comment", "/**\n     * Exports all assets under a /Game path OR a single asset.\n     * Examples:\n     *   /Game/SomeFolder\n     *   /Game/Props/SM_Box.SM_Box\n     * Optional type include filter examples: \"animation\", \"mesh\", \"staticmesh\", \"skeletalmesh\",\n     * \"material\", \"blueprint\", \"niagara\" (comma/space/pipe separated).\n     * Optional exclude filter uses the same tokens.\n     * Returns: number of exported builds.\n     */" },
		{ "CPP_Default_InExcludeTypeFilter", "" },
		{ "CPP_Default_InTypeFilter", "" },
		{ "ModuleRelativePath", "Public/AssetSnapshotBPLibrary.h" },
		{ "ToolTip", "Exports all assets under a /Game path OR a single asset.\nExamples:\n  /Game/SomeFolder\n  /Game/Props/SM_Box.SM_Box\nOptional type include filter examples: \"animation\", \"mesh\", \"staticmesh\", \"skeletalmesh\",\n\"material\", \"blueprint\", \"niagara\" (comma/space/pipe separated).\nOptional exclude filter uses the same tokens.\nReturns: number of exported builds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGamePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTypeFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InExcludeTypeFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExportPathBuilds constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InGamePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InTypeFilter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InExcludeTypeFilter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExportPathBuilds constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExportPathBuilds Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics::NewProp_InGamePath = { "InGamePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetSnapshotBPLibrary_eventExportPathBuilds_Parms, InGamePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGamePath_MetaData), NewProp_InGamePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics::NewProp_InTypeFilter = { "InTypeFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetSnapshotBPLibrary_eventExportPathBuilds_Parms, InTypeFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTypeFilter_MetaData), NewProp_InTypeFilter_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics::NewProp_InExcludeTypeFilter = { "InExcludeTypeFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetSnapshotBPLibrary_eventExportPathBuilds_Parms, InExcludeTypeFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExcludeTypeFilter_MetaData), NewProp_InExcludeTypeFilter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetSnapshotBPLibrary_eventExportPathBuilds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics::NewProp_InGamePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics::NewProp_InTypeFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics::NewProp_InExcludeTypeFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics::PropPointers) < 2048);
// ********** End Function ExportPathBuilds Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetSnapshotBPLibrary, nullptr, "ExportPathBuilds", 	Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics::AssetSnapshotBPLibrary_eventExportPathBuilds_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics::AssetSnapshotBPLibrary_eventExportPathBuilds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetSnapshotBPLibrary::execExportPathBuilds)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InGamePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_InTypeFilter);
	P_GET_PROPERTY(FStrProperty,Z_Param_InExcludeTypeFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAssetSnapshotBPLibrary::ExportPathBuilds(Z_Param_InGamePath,Z_Param_InTypeFilter,Z_Param_InExcludeTypeFilter);
	P_NATIVE_END;
}
// ********** End Class UAssetSnapshotBPLibrary Function ExportPathBuilds **************************

// ********** Begin Class UAssetSnapshotBPLibrary Function GetDefaultExportRoot ********************
struct Z_Construct_UFunction_UAssetSnapshotBPLibrary_GetDefaultExportRoot_Statics
{
	struct AssetSnapshotBPLibrary_eventGetDefaultExportRoot_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetSnapshot" },
		{ "Comment", "/** Default export root: <ProjectRoot>/export */" },
		{ "ModuleRelativePath", "Public/AssetSnapshotBPLibrary.h" },
		{ "ToolTip", "Default export root: <ProjectRoot>/export" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDefaultExportRoot constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDefaultExportRoot constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDefaultExportRoot Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_GetDefaultExportRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetSnapshotBPLibrary_eventGetDefaultExportRoot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetSnapshotBPLibrary_GetDefaultExportRoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetSnapshotBPLibrary_GetDefaultExportRoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetSnapshotBPLibrary_GetDefaultExportRoot_Statics::PropPointers) < 2048);
// ********** End Function GetDefaultExportRoot Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_GetDefaultExportRoot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetSnapshotBPLibrary, nullptr, "GetDefaultExportRoot", 	Z_Construct_UFunction_UAssetSnapshotBPLibrary_GetDefaultExportRoot_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetSnapshotBPLibrary_GetDefaultExportRoot_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAssetSnapshotBPLibrary_GetDefaultExportRoot_Statics::AssetSnapshotBPLibrary_eventGetDefaultExportRoot_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetSnapshotBPLibrary_GetDefaultExportRoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetSnapshotBPLibrary_GetDefaultExportRoot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetSnapshotBPLibrary_GetDefaultExportRoot_Statics::AssetSnapshotBPLibrary_eventGetDefaultExportRoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetSnapshotBPLibrary_GetDefaultExportRoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetSnapshotBPLibrary_GetDefaultExportRoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetSnapshotBPLibrary::execGetDefaultExportRoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UAssetSnapshotBPLibrary::GetDefaultExportRoot();
	P_NATIVE_END;
}
// ********** End Class UAssetSnapshotBPLibrary Function GetDefaultExportRoot **********************

// ********** Begin Class UAssetSnapshotBPLibrary Function ImportSnapshotZip ***********************
struct Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics
{
	struct AssetSnapshotBPLibrary_eventImportSnapshotZip_Parms
	{
		FString ZipPath;
		EAssetSnapshotImportMode Mode;
		FString OutError;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetSnapshot" },
		{ "Comment", "/** Import all files from a snapshot zip into the project Content directory. */" },
		{ "ModuleRelativePath", "Public/AssetSnapshotBPLibrary.h" },
		{ "ToolTip", "Import all files from a snapshot zip into the project Content directory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZipPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ImportSnapshotZip constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZipPath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutError;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ImportSnapshotZip constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ImportSnapshotZip Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::NewProp_ZipPath = { "ZipPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetSnapshotBPLibrary_eventImportSnapshotZip_Parms, ZipPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZipPath_MetaData), NewProp_ZipPath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetSnapshotBPLibrary_eventImportSnapshotZip_Parms, Mode), Z_Construct_UEnum_AssetMetaExplorerBridge_EAssetSnapshotImportMode, METADATA_PARAMS(0, nullptr) }; // 3665345639
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetSnapshotBPLibrary_eventImportSnapshotZip_Parms, OutError), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetSnapshotBPLibrary_eventImportSnapshotZip_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetSnapshotBPLibrary_eventImportSnapshotZip_Parms), &Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::NewProp_ZipPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::NewProp_OutError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::PropPointers) < 2048);
// ********** End Function ImportSnapshotZip Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetSnapshotBPLibrary, nullptr, "ImportSnapshotZip", 	Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::AssetSnapshotBPLibrary_eventImportSnapshotZip_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::AssetSnapshotBPLibrary_eventImportSnapshotZip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetSnapshotBPLibrary::execImportSnapshotZip)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ZipPath);
	P_GET_ENUM(EAssetSnapshotImportMode,Z_Param_Mode);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAssetSnapshotBPLibrary::ImportSnapshotZip(Z_Param_ZipPath,EAssetSnapshotImportMode(Z_Param_Mode),Z_Param_Out_OutError);
	P_NATIVE_END;
}
// ********** End Class UAssetSnapshotBPLibrary Function ImportSnapshotZip *************************

// ********** Begin Class UAssetSnapshotBPLibrary **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetSnapshotBPLibrary;
UClass* UAssetSnapshotBPLibrary::GetPrivateStaticClass()
{
	using TClass = UAssetSnapshotBPLibrary;
	if (!Z_Registration_Info_UClass_UAssetSnapshotBPLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AssetSnapshotBPLibrary"),
			Z_Registration_Info_UClass_UAssetSnapshotBPLibrary.InnerSingleton,
			StaticRegisterNativesUAssetSnapshotBPLibrary,
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
	return Z_Registration_Info_UClass_UAssetSnapshotBPLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetSnapshotBPLibrary_NoRegister()
{
	return UAssetSnapshotBPLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetSnapshotBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AssetSnapshotBPLibrary.h" },
		{ "ModuleRelativePath", "Public/AssetSnapshotBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAssetSnapshotBPLibrary constinit property declarations ******************
// ********** End Class UAssetSnapshotBPLibrary constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DownloadAndImportSnapshot"), .Pointer = &UAssetSnapshotBPLibrary::execDownloadAndImportSnapshot },
		{ .NameUTF8 = UTF8TEXT("ExportAssetBuild"), .Pointer = &UAssetSnapshotBPLibrary::execExportAssetBuild },
		{ .NameUTF8 = UTF8TEXT("ExportPathBuilds"), .Pointer = &UAssetSnapshotBPLibrary::execExportPathBuilds },
		{ .NameUTF8 = UTF8TEXT("GetDefaultExportRoot"), .Pointer = &UAssetSnapshotBPLibrary::execGetDefaultExportRoot },
		{ .NameUTF8 = UTF8TEXT("ImportSnapshotZip"), .Pointer = &UAssetSnapshotBPLibrary::execImportSnapshotZip },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetSnapshotBPLibrary_DownloadAndImportSnapshot, "DownloadAndImportSnapshot" }, // 2501751389
		{ &Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportAssetBuild, "ExportAssetBuild" }, // 346647256
		{ &Z_Construct_UFunction_UAssetSnapshotBPLibrary_ExportPathBuilds, "ExportPathBuilds" }, // 1710303436
		{ &Z_Construct_UFunction_UAssetSnapshotBPLibrary_GetDefaultExportRoot, "GetDefaultExportRoot" }, // 999444494
		{ &Z_Construct_UFunction_UAssetSnapshotBPLibrary_ImportSnapshotZip, "ImportSnapshotZip" }, // 1277472760
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetSnapshotBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAssetSnapshotBPLibrary_Statics
UObject* (*const Z_Construct_UClass_UAssetSnapshotBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AssetMetaExplorerBridge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetSnapshotBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetSnapshotBPLibrary_Statics::ClassParams = {
	&UAssetSnapshotBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetSnapshotBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetSnapshotBPLibrary_Statics::Class_MetaDataParams)
};
void UAssetSnapshotBPLibrary::StaticRegisterNativesUAssetSnapshotBPLibrary()
{
	UClass* Class = UAssetSnapshotBPLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAssetSnapshotBPLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAssetSnapshotBPLibrary()
{
	if (!Z_Registration_Info_UClass_UAssetSnapshotBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetSnapshotBPLibrary.OuterSingleton, Z_Construct_UClass_UAssetSnapshotBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetSnapshotBPLibrary.OuterSingleton;
}
UAssetSnapshotBPLibrary::UAssetSnapshotBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAssetSnapshotBPLibrary);
UAssetSnapshotBPLibrary::~UAssetSnapshotBPLibrary() {}
// ********** End Class UAssetSnapshotBPLibrary ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotBPLibrary_h__Script_AssetMetaExplorerBridge_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetSnapshotBPLibrary, UAssetSnapshotBPLibrary::StaticClass, TEXT("UAssetSnapshotBPLibrary"), &Z_Registration_Info_UClass_UAssetSnapshotBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetSnapshotBPLibrary), 3518872668U) },
	};
}; // Z_CompiledInDeferFile_FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotBPLibrary_h__Script_AssetMetaExplorerBridge_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotBPLibrary_h__Script_AssetMetaExplorerBridge_2492438894{
	TEXT("/Script/AssetMetaExplorerBridge"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotBPLibrary_h__Script_AssetMetaExplorerBridge_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotBPLibrary_h__Script_AssetMetaExplorerBridge_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
