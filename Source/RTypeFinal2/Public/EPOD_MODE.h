#pragma once
#include "CoreMinimal.h"
#include "EPOD_MODE.generated.h"

UENUM(BlueprintType)
enum class EPOD_MODE : uint8 {
    UNKNOWN,
    NORMAL,
    SHOOT,
    RETURN,
    EMERGENCY,
    NUM,
};

