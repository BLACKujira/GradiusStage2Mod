#pragma once
#include "CoreMinimal.h"
#include "L041Mode.generated.h"

UENUM(BlueprintType)
enum class L041Mode : uint8 {
    FLY,
    BOUND,
    HEADDEAD,
    NUM,
};

