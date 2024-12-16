#pragma once
#include "CoreMinimal.h"
#include "EF058_MOT.generated.h"

UENUM(BlueprintType)
enum class EF058_MOT : uint8 {
    IDLE,
    SLASH1,
    SLASH2,
    SLASH3,
    THRUST,
    NUM,
};

