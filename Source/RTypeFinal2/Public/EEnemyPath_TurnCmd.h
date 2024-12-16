#pragma once
#include "CoreMinimal.h"
#include "EEnemyPath_TurnCmd.generated.h"

UENUM(BlueprintType)
enum class EEnemyPath_TurnCmd : uint8 {
    X,
    Y,
    Z,
    F,
    R,
};

