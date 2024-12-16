#pragma once
#include "CoreMinimal.h"
#include "EE5104_COMMAND.generated.h"

UENUM(BlueprintType)
enum class EE5104_COMMAND : uint8 {
    Idle,
    Open,
    Right,
    Left,
};

