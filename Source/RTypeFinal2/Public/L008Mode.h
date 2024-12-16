#pragma once
#include "CoreMinimal.h"
#include "L008Mode.generated.h"

UENUM(BlueprintType)
enum class L008Mode : uint8 {
    STRAIGHT,
    SEARCH,
    STRAIGHT_2,
    NUM,
};

