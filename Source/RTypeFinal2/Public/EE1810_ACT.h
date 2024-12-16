#pragma once
#include "CoreMinimal.h"
#include "EE1810_ACT.generated.h"

UENUM(BlueprintType)
enum class EE1810_ACT : uint8 {
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

