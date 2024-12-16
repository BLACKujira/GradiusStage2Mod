#pragma once
#include "CoreMinimal.h"
#include "EE230_BG_ACT.generated.h"

UENUM(BlueprintType)
enum class EE230_BG_ACT : uint8 {
    IDLE,
    WALK,
    TURN,
    FEED,
    DEATH,
    NUM,
};

