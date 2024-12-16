#pragma once
#include "CoreMinimal.h"
#include "EE3613_ACT.generated.h"

UENUM(BlueprintType)
enum class EE3613_ACT : uint8 {
    IDLE,
    HIDE,
    APPEAR,
    DEATH,
    NUM,
};

