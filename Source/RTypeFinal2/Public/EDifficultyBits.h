#pragma once
#include "CoreMinimal.h"
#include "EDifficultyBits.generated.h"

UENUM(BlueprintType)
enum class EDifficultyBits : uint8 {
    None,
    VERY_EASY,
    EASY,
    NORMAL = 4,
    HARD = 8,
    VERY_HARD = 16,
    VERY_HARD2 = 32,
    VERY_HARD3 = 64,
};

