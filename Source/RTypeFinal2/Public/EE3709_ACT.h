#pragma once
#include "CoreMinimal.h"
#include "EE3709_ACT.generated.h"

UENUM(BlueprintType)
enum class EE3709_ACT : uint8 {
    APP,
    WAIT,
    SHOT,
    DEATH,
    NUM,
};

