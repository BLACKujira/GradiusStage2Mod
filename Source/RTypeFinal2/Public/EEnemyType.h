#pragma once
#include "CoreMinimal.h"
#include "EEnemyType.generated.h"

UENUM(BlueprintType)
enum class EEnemyType : uint8 {
    ENEMY,
    BULLET,
    ITEM,
};

