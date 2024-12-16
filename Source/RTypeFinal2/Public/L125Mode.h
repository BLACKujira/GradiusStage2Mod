#pragma once
#include "CoreMinimal.h"
#include "L125Mode.generated.h"

UENUM(BlueprintType)
enum class L125Mode : uint8 {
    STRAIGHT,
    SEARCH,
    NUM,
};

