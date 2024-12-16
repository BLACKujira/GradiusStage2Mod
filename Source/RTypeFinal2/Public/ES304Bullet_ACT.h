#pragma once
#include "CoreMinimal.h"
#include "ES304Bullet_ACT.generated.h"

UENUM(BlueprintType)
enum class ES304Bullet_ACT : uint8 {
    START,
    HOMING,
    FLY,
    DEATH,
    NUM,
};

