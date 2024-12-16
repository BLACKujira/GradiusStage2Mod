#pragma once
#include "CoreMinimal.h"
#include "EM017B_MODE.generated.h"

UENUM(BlueprintType)
enum class EM017B_MODE : uint8 {
    EXPLODE,
    DECAY,
    DISAPPEAR,
    NUM,
};

