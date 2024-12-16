#pragma once
#include "CoreMinimal.h"
#include "EGameMode.generated.h"

UENUM(BlueprintType)
enum class EGameMode : uint8 {
    NORMAL,
    SCORE_ATTACK1,
    SCORE_ATTACK2,
    DLC_NORMAL,
    TUTORIAL,
    COMPETITION,
    UNKNOWN = 255,
    SCORE_ATTACK = SCORE_ATTACK1,
};

