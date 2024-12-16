#pragma once
#include "CoreMinimal.h"
#include "EE3402_ACT.generated.h"

UENUM(BlueprintType)
enum class EE3402_ACT : uint8 {
    FLY,
    ATTACK,
    WAIT,
    DOWN,
    DEATH,
    NUM,
};

