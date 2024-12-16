#pragma once
#include "CoreMinimal.h"
#include "EDoseType.generated.h"

UENUM(BlueprintType)
enum class EDoseType : uint8 {
    DOSE_BULLET,
    DOSE_ENEMY,
    DOSE_ENEMY_HARD,
    NUM,
};

