#pragma once
#include "CoreMinimal.h"
#include "EEnemyExplosionType.generated.h"

UENUM(BlueprintType)
enum class EEnemyExplosionType : uint8 {
    None,
    Slice,
    NUM,
};

