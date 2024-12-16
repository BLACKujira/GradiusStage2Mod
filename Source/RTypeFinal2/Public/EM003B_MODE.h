#pragma once
#include "CoreMinimal.h"
#include "EM003B_MODE.generated.h"

UENUM(BlueprintType)
enum class EM003B_MODE : uint8 {
    EXPLODE,
    DECAY,
    NUM,
};

