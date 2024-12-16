#pragma once
#include "CoreMinimal.h"
#include "EE230_ACT.generated.h"

UENUM(BlueprintType)
enum class EE230_ACT : uint8 {
    IDLE,
    WALK,
    TURN,
    FEED,
    LOOK,
    THREAT,
    ATTACK,
    FALL,
    KO,
    DEATH,
    NUM,
};

