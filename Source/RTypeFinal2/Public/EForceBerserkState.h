#pragma once
#include "CoreMinimal.h"
#include "EForceBerserkState.generated.h"

UENUM(BlueprintType)
enum class EForceBerserkState : uint8 {
    IDLE,
    HEAT_UP,
    BUSY,
    POST_BUSY,
    COOL_DOWN,
    NUM,
};

