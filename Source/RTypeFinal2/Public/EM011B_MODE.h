#pragma once
#include "CoreMinimal.h"
#include "EM011B_MODE.generated.h"

UENUM(BlueprintType)
enum class EM011B_MODE : uint8 {
    EXPLODE,
    DECAY,
    NUM,
};

