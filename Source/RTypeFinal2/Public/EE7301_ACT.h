#pragma once
#include "CoreMinimal.h"
#include "EE7301_ACT.generated.h"

UENUM(BlueprintType)
enum class EE7301_ACT : uint8 {
    IDLE,
    SHOT,
    DEATH,
    DEATHAWAIT,
    NUM,
};

