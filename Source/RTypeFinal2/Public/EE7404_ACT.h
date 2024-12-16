#pragma once
#include "CoreMinimal.h"
#include "EE7404_ACT.generated.h"

UENUM(BlueprintType)
enum class EE7404_ACT : uint8 {
    MOVE,
    TURN,
    ATTACK,
    DEATH,
    RETREAT,
    NUM,
};

