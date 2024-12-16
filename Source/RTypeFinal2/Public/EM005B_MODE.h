#pragma once
#include "CoreMinimal.h"
#include "EM005B_MODE.generated.h"

UENUM(BlueprintType)
enum class EM005B_MODE : uint8 {
    EXPLODE,
    DECAY,
    NUM,
};

