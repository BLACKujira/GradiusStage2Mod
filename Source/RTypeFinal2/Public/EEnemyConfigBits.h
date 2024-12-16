#pragma once
#include "CoreMinimal.h"
#include "EEnemyConfigBits.generated.h"

UENUM(BlueprintType)
enum class EEnemyConfigBits : uint8 {
    None,
    PLIABLE,
    BOSS,
    PHYSICS = 4,
};

