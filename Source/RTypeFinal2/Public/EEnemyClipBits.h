#pragma once
#include "CoreMinimal.h"
#include "EEnemyClipBits.generated.h"

UENUM(BlueprintType)
enum class EEnemyClipBits : uint8 {
    None,
    DISP,
    DISP_IN,
    DISP_OUT = 4,
    HIT = 8,
    HIT_IN = 16,
    HIT_OUT = 32,
    ATTACK = 64,
};

