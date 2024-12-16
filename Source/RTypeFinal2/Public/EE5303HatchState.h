#pragma once
#include "CoreMinimal.h"
#include "EE5303HatchState.generated.h"

UENUM(BlueprintType)
enum class EE5303HatchState : uint8 {
    CLOSE,
    OPEN_WAIT,
    OPEN,
};

