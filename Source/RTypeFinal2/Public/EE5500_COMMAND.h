#pragma once
#include "CoreMinimal.h"
#include "EE5500_COMMAND.generated.h"

UENUM(BlueprintType)
enum class EE5500_COMMAND : uint8 {
    Idle,
    Right,
    Left,
};

