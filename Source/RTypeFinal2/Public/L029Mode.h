#pragma once
#include "CoreMinimal.h"
#include "L029Mode.generated.h"

UENUM(BlueprintType)
enum class L029Mode : uint8 {
    M_FREE,
    M_SEARCH,
    M_FALL,
    NUM,
};

