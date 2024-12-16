#pragma once
#include "CoreMinimal.h"
#include "EE5202_ACT.generated.h"

UENUM(BlueprintType)
enum class EE5202_ACT : uint8 {
    APP,
    WAIT,
    SHOT,
    DEATH,
    NUM,
};

