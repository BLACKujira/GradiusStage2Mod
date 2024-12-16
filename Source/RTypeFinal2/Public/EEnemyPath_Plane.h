#pragma once
#include "CoreMinimal.h"
#include "EEnemyPath_Plane.generated.h"

UENUM(BlueprintType)
enum class EEnemyPath_Plane : uint8 {
    XY,
    XZ,
    ZY,
    YZ,
    DEFAULT = XZ,
};

