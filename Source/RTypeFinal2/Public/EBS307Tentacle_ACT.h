#pragma once
#include "CoreMinimal.h"
#include "EBS307Tentacle_ACT.generated.h"

UENUM(BlueprintType)
enum class EBS307Tentacle_ACT : uint8 {
    SEED,
    RECOVER,
    GROWTH,
    STOP,
    DEATH,
    NUM,
};

