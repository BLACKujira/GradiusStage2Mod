#pragma once
#include "CoreMinimal.h"
#include "L080Mode.generated.h"

UENUM(BlueprintType)
enum class L080Mode : uint8 {
    HIT_LAND,
    HIT_ENEMY,
    NO_HIT,
    NUM,
};

