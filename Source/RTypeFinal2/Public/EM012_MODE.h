#pragma once
#include "CoreMinimal.h"
#include "EM012_MODE.generated.h"

UENUM(BlueprintType)
enum class EM012_MODE : uint8 {
    DROP,
    ACCEL,
    CRUISE,
    NUM,
};

