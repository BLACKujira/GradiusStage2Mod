#pragma once
#include "CoreMinimal.h"
#include "EBS307Spore_ACT.generated.h"

UENUM(BlueprintType)
enum class EBS307Spore_ACT : uint8 {
    SEED,
    RECOVER,
    GROWTH,
    STOP,
    DEATH,
    NUM,
};

