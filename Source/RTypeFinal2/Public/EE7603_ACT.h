#pragma once
#include "CoreMinimal.h"
#include "EE7603_ACT.generated.h"

UENUM(BlueprintType)
enum class EE7603_ACT : uint8 {
    APP,
    APPEND,
    IDLE,
    MOVE,
    ATTACK,
    DEATH,
    RETREAT,
    NUM,
};

