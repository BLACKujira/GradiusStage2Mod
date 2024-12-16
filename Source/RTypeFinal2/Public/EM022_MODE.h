#pragma once
#include "CoreMinimal.h"
#include "EM022_MODE.generated.h"

UENUM(BlueprintType)
enum class EM022_MODE : uint8 {
    DROP,
    ACCEL,
    CRUISE,
    NUM,
};

