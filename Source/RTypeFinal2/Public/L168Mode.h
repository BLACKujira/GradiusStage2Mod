#pragma once
#include "CoreMinimal.h"
#include "L168Mode.generated.h"

UENUM(BlueprintType)
enum class L168Mode : uint8 {
    STRAIGHT,
    SEARCH,
    NUM,
};

