// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetSnapshotImportTypes.h"

#ifdef ASSETMETAEXPLORERBRIDGE_AssetSnapshotImportTypes_generated_h
#error "AssetSnapshotImportTypes.generated.h already included, missing '#pragma once' in AssetSnapshotImportTypes.h"
#endif
#define ASSETMETAEXPLORERBRIDGE_AssetSnapshotImportTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_AssetMetaExplorerBridge_Source_Public_AssetSnapshotImportTypes_h

// ********** Begin Enum EAssetSnapshotImportMode **************************************************
#define FOREACH_ENUM_EASSETSNAPSHOTIMPORTMODE(op) \
	op(EAssetSnapshotImportMode::OverrideExisting) \
	op(EAssetSnapshotImportMode::SkipExisting) 

enum class EAssetSnapshotImportMode : uint8;
template<> struct TIsUEnumClass<EAssetSnapshotImportMode> { enum { Value = true }; };
template<> ASSETMETAEXPLORERBRIDGE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAssetSnapshotImportMode>();
// ********** End Enum EAssetSnapshotImportMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
