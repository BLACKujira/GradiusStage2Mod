#pragma once
#include "CoreMinimal.h"
#include "EE3713_ACT.generated.h"

UENUM(BlueprintType)
enum class EE3713_ACT : uint8 {
    SEED,
    GROWTH,
    STOP,
    DEATH,
    NUM,
};

