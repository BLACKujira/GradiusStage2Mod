#pragma once
#include "CoreMinimal.h"
#include "EM006B_MODE.generated.h"

UENUM(BlueprintType)
enum class EM006B_MODE : uint8 {
    EXPLODE,
    DECAY,
    DISAPPEAR,
    NUM,
};

