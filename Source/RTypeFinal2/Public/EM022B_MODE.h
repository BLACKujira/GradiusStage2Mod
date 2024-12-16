#pragma once
#include "CoreMinimal.h"
#include "EM022B_MODE.generated.h"

UENUM(BlueprintType)
enum class EM022B_MODE : uint8 {
    EXPLODE,
    DECAY,
    NUM,
};

