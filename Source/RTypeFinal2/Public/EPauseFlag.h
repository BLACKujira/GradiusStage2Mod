#pragma once
#include "CoreMinimal.h"
#include "EPauseFlag.generated.h"

UENUM(BlueprintType)
enum class EPauseFlag : uint8 {
    None,
    SYSTEM,
    GAME,
    EVENT = 4,
    PLAYER = 8,
    INTERRUPT = 16,
    RESUME = 32,
    DEBUG = 128,
    MASK = 255,
};

