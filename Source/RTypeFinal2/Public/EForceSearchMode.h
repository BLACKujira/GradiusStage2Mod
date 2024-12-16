#pragma once
#include "CoreMinimal.h"
#include "EForceSearchMode.generated.h"

UENUM(BlueprintType)
enum class EForceSearchMode : uint8 {
    UNKNOWN,
    WAIT,
    ROT,
    MOVE,
    NUM,
};

