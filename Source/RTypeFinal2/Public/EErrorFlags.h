#pragma once
#include "CoreMinimal.h"
#include "EErrorFlags.generated.h"

UENUM(BlueprintType)
enum class EErrorFlags : uint8 {
    None,
    Score,
    ScoreStageStart,
};

