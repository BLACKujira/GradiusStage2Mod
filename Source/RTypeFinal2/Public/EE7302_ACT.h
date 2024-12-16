#pragma once
#include "CoreMinimal.h"
#include "EE7302_ACT.generated.h"

UENUM(BlueprintType)
enum class EE7302_ACT : uint8 {
    IDLE,
    SHOT,
    DEATH,
    DEATHAWAIT,
    NUM,
};

