#pragma once
#include "CoreMinimal.h"
#include "EEnemyExplosionScatterEvent.generated.h"

UENUM(BlueprintType)
enum class EEnemyExplosionScatterEvent : uint8 {
    None,
    START,
    EXP_BODY,
    EXP_PARTS,
};

