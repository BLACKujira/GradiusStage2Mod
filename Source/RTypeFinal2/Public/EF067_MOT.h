#pragma once
#include "CoreMinimal.h"
#include "EF067_MOT.generated.h"

UENUM(BlueprintType)
enum class EF067_MOT : uint8 {
    IDLE,
    SLASH1,
    SLASH2,
    SLASH3,
    ROLL_R,
    ROLL_B,
    NUM,
};

