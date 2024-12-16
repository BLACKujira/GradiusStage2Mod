#pragma once
#include "CoreMinimal.h"
#include "EE3600DripEffect_ACT.generated.h"

UENUM(BlueprintType)
enum class EE3600DripEffect_ACT : uint8 {
    WAIT,
    LAND,
    DRIP,
    OFF,
    NUM,
};

