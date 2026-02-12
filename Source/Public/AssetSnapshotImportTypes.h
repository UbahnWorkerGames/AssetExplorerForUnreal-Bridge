#pragma once

#include "AssetSnapshotImportTypes.generated.h"

UENUM(BlueprintType)
enum class EAssetSnapshotImportMode : uint8
{
    OverrideExisting UMETA(DisplayName = "Override Existing"),
    SkipExisting UMETA(DisplayName = "Skip Existing")
};
