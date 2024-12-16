#pragma once
#include "CoreMinimal.h"
#include "L023Mode.generated.h"

UENUM(BlueprintType)
enum class L023Mode : uint8 {
    STRAIGHT,
    SEARCH,
    STRAIGHT_2,
    NUM,
};

