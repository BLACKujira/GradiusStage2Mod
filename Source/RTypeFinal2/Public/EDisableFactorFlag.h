#pragma once
#include "CoreMinimal.h"
#include "EDisableFactorFlag.generated.h"

UENUM(BlueprintType)
enum class EDisableFactorFlag : uint8 {
    None,
    SYSTEM,
    GAME,
    EVENT = 4,
    PLAYER = 8,
    MASK = 255,
};

