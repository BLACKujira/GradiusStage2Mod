#pragma once
#include "CoreMinimal.h"
#include "EE7709_ACT.generated.h"

UENUM(BlueprintType)
enum class EE7709_ACT : uint8 {
    APP,
    WAIT,
    SHOT,
    DEATH,
    NUM,
};

