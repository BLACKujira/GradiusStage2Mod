#pragma once
#include "CoreMinimal.h"
#include "EE000_ACT.generated.h"

UENUM(BlueprintType)
enum class EE000_ACT : uint8 {
    APP,
    FLY,
    MOVE,
    LAND,
    FALL,
    TURN,
    HIT,
    JUMP,
    DEATH,
    DEATHAT,
    NUM,
};

