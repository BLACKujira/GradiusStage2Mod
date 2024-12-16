#pragma once
#include "CoreMinimal.h"
#include "EE7501_COMMAND.generated.h"

UENUM(BlueprintType)
enum class EE7501_COMMAND : uint8 {
    STOP,
    MOVE,
    ATTACK,
    ROTATE,
};

