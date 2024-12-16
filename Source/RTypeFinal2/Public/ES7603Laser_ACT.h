#pragma once
#include "CoreMinimal.h"
#include "ES7603Laser_ACT.generated.h"

UENUM(BlueprintType)
enum class ES7603Laser_ACT : uint8 {
    EXTEND,
    FLY,
    DEATH,
    NUM,
};

