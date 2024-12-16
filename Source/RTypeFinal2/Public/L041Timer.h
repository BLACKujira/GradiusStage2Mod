#pragma once
#include "CoreMinimal.h"
#include "L041Timer.generated.h"

UENUM(BlueprintType)
enum class L041Timer : uint8 {
    UPPER,
    LOWER,
    WHOLE,
    NUM,
};

