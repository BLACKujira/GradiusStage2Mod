#pragma once
#include "CoreMinimal.h"
#include "ES2501_YELLOW_ACT.generated.h"

UENUM(BlueprintType)
enum class ES2501_YELLOW_ACT : uint8 {
    START,
    STARTR,
    BEAM,
    BEAMR,
    END,
    DEATH,
    NUM,
};

