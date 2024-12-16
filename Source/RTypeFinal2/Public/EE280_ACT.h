#pragma once
#include "CoreMinimal.h"
#include "EE280_ACT.generated.h"

UENUM(BlueprintType)
enum class EE280_ACT : uint8 {
    SEED,
    GERM,
    SHOOT,
    DEATH,
    NUM,
};

