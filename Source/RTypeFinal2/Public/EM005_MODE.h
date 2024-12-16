#pragma once
#include "CoreMinimal.h"
#include "EM005_MODE.generated.h"

UENUM(BlueprintType)
enum class EM005_MODE : uint8 {
    DROP,
    ACCEL,
    CRUISE,
    NUM,
};

