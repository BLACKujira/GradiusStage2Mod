#pragma once
#include "CoreMinimal.h"
#include "L020Mode.generated.h"

UENUM(BlueprintType)
enum class L020Mode : uint8 {
    STRAIGHT,
    SEARCH,
    STRAIGHT_2,
    NUM,
};

