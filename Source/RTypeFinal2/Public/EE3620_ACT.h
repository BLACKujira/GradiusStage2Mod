#pragma once
#include "CoreMinimal.h"
#include "EE3620_ACT.generated.h"

UENUM(BlueprintType)
enum class EE3620_ACT : uint8 {
    IDLE,
    BACK,
    PRE_OPEN,
    OPEN,
    CLOSE,
    FORWARD,
    SHOT,
    DEATH,
    NUM,
};

