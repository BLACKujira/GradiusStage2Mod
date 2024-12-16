#pragma once
#include "CoreMinimal.h"
#include "ESplineCmd_ScrHit.generated.h"

UENUM(BlueprintType)
enum class ESplineCmd_ScrHit : uint8 {
    None,
    Left,
    Right,
    Up = 4,
    Down = 8,
};

