#pragma once
#include "CoreMinimal.h"
#include "EEnemyStatus.generated.h"

UENUM(BlueprintType)
enum class EEnemyStatus : uint8 {
    READY,
    ALIVE,
    DEATH,
};

