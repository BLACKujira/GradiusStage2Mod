#pragma once
#include "CoreMinimal.h"
#include "ECompetitionGamePhase.generated.h"

UENUM(BlueprintType)
enum class ECompetitionGamePhase : uint8 {
    None,
    StartCount,
    Start,
    GameOver,
    GameClear,
};

