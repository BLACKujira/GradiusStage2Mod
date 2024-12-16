#pragma once
#include "CoreMinimal.h"
#include "EM014_MODE.generated.h"

UENUM(BlueprintType)
enum class EM014_MODE : uint8 {
    START,
    ACCEL,
    CRUISE,
    EXPLODE,
    KILLWAIT,
    NUM,
};

