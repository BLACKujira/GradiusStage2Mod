#pragma once
#include "CoreMinimal.h"
#include "EE7403_ACT.generated.h"

UENUM(BlueprintType)
enum class EE7403_ACT : uint8 {
    WAIT,
    MOVE,
    TURN,
    ATTACK,
    DEATH,
    NUM,
};

