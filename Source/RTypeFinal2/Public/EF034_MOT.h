#pragma once
#include "CoreMinimal.h"
#include "EF034_MOT.generated.h"

UENUM(BlueprintType)
enum class EF034_MOT : uint8 {
    IDLE,
    SLASH1,
    SLASH2,
    SLASH3,
    THRUST,
    NUM,
};

