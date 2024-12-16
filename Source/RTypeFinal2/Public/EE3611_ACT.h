#pragma once
#include "CoreMinimal.h"
#include "EE3611_ACT.generated.h"

UENUM(BlueprintType)
enum class EE3611_ACT : uint8 {
    IDLE,
    HIDE,
    APPEAR,
    DEATH,
    NUM,
};

