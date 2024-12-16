#pragma once
#include "CoreMinimal.h"
#include "EE104_ACT.generated.h"

UENUM(BlueprintType)
enum class EE104_ACT : uint8 {
    APP,
    APPEND,
    IDLE,
    MOVE,
    ATTACK,
    DEATH,
    DEATH1,
    NUM,
};

