#pragma once
#include "CoreMinimal.h"
#include "EE7300_ACT.generated.h"

UENUM(BlueprintType)
enum class EE7300_ACT : uint8 {
    APPEAR,
    MOVE,
    DEATH,
    MANAGE,
    NUM,
};

