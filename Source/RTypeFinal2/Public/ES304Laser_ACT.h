#pragma once
#include "CoreMinimal.h"
#include "ES304Laser_ACT.generated.h"

UENUM(BlueprintType)
enum class ES304Laser_ACT : uint8 {
    EXTEND,
    FLY,
    DEATH,
    NUM,
};

