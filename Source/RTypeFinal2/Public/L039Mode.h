#pragma once
#include "CoreMinimal.h"
#include "L039Mode.generated.h"

UENUM(BlueprintType)
enum class L039Mode : uint8 {
    M_FREE,
    M_SIDE,
    M_SEARCH,
    NUM,
};

