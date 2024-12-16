#pragma once
#include "CoreMinimal.h"
#include "EE1802_PARTS_STATE.generated.h"

UENUM(BlueprintType)
enum class EE1802_PARTS_STATE : uint8 {
    OPEN,
    OPENING,
    OPENED,
    WAIT,
    CLOSE,
    CLOSING,
    NUM,
};

