#pragma once
#include "CoreMinimal.h"
#include "EBS013Laser_ACT.generated.h"

UENUM(BlueprintType)
enum class EBS013Laser_ACT : uint8 {
    START,
    FLY,
    DEATH,
    NUM,
};

