#pragma once
#include "CoreMinimal.h"
#include "EBS013Bullet_ACT.generated.h"

UENUM(BlueprintType)
enum class EBS013Bullet_ACT : uint8 {
    START,
    HOMING,
    FLY,
    DEATH,
    NUM,
};

