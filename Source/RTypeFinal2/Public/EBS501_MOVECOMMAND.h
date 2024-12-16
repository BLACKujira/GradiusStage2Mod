#pragma once
#include "CoreMinimal.h"
#include "EBS501_MOVECOMMAND.generated.h"

UENUM(BlueprintType)
enum class EBS501_MOVECOMMAND : uint8 {
    Right,
    Left,
    Down,
    Idle,
};

