#pragma once
#include "CoreMinimal.h"
#include "L176Mode.generated.h"

UENUM(BlueprintType)
enum class L176Mode : uint8 {
    M_FREE,
    M_SEARCH,
    M_FALL,
    NUM,
};

