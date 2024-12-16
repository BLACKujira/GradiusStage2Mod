#pragma once
#include "CoreMinimal.h"
#include "L162Mode.generated.h"

UENUM(BlueprintType)
enum class L162Mode : uint8 {
    M_FREE,
    M_SEARCH,
    NUM,
};

