#pragma once
#include "CoreMinimal.h"
#include "EE5605HatchState.generated.h"

UENUM(BlueprintType)
enum class EE5605HatchState : uint8 {
    CLOSE,
    OPEN_WAIT,
    OPEN,
};

