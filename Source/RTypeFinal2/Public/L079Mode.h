#pragma once
#include "CoreMinimal.h"
#include "L079Mode.generated.h"

UENUM(BlueprintType)
enum class L079Mode : uint8 {
    NORMAL,
    PREDIVIDE,
    DIVIDE,
    NUM,
};

