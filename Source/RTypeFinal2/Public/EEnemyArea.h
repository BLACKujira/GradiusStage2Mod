#pragma once
#include "CoreMinimal.h"
#include "EEnemyArea.generated.h"

UENUM(BlueprintType)
enum class EEnemyArea : uint8 {
    Disp,
    Hit,
    Attack,
    NUM,
};

