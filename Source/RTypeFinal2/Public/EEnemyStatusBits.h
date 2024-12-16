#pragma once
#include "CoreMinimal.h"
#include "EEnemyStatusBits.generated.h"

UENUM(BlueprintType)
enum class EEnemyStatusBits : uint8 {
    None,
    SCREEN,
    NO_SHOOT = 16,
    NO_DAMAGE = 32,
};

