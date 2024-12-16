#pragma once
#include "CoreMinimal.h"
#include "H023Mode.generated.h"

UENUM(BlueprintType)
enum class H023Mode : uint8 {
    GROW,
    SHRINK,
    MOVE,
    NUM,
};

