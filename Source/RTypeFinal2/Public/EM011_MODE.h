#pragma once
#include "CoreMinimal.h"
#include "EM011_MODE.generated.h"

UENUM(BlueprintType)
enum class EM011_MODE : uint8 {
    DROP,
    ACCEL,
    CRUISE,
    NUM,
};

