#pragma once
#include "CoreMinimal.h"
#include "EM012B_MODE.generated.h"

UENUM(BlueprintType)
enum class EM012B_MODE : uint8 {
    EXPLODE,
    DECAY,
    NUM,
};

