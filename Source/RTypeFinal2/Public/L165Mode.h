#pragma once
#include "CoreMinimal.h"
#include "L165Mode.generated.h"

UENUM(BlueprintType)
enum class L165Mode : uint8 {
    M_FREE,
    M_SEARCH,
    NUM,
};

