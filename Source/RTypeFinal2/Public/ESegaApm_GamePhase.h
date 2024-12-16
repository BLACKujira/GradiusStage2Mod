#pragma once
#include "CoreMinimal.h"
#include "ESegaApm_GamePhase.generated.h"

UENUM(BlueprintType)
enum class ESegaApm_GamePhase : uint8 {
    None,
    DEMO_LOOP,
    READY,
    IN_GAME,
    CONTINUE,
    GAMEOVER,
};

