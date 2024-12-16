#pragma once
#include "CoreMinimal.h"
#include "EM003_MODE.generated.h"

UENUM(BlueprintType)
enum class EM003_MODE : uint8 {
    DROP,
    ACCEL,
    CRUISE,
    NUM,
};

