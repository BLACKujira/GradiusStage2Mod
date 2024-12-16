#pragma once
#include "CoreMinimal.h"
#include "EEnemyPath_Command.generated.h"

UENUM(BlueprintType)
enum class EEnemyPath_Command : uint8 {
    END,
    PATH,
    MOVE,
    ROT,
    SPD,
    SPDACC,
    PLANE,
    WAIT,
    JUMP,
    JUMPR,
    ADDR,
    HIT,
    FLAG,
    SND,
    VIB,
    EFF,
    ANIM,
    TURN,
    EVENT,
    MOVEDEG,
};

