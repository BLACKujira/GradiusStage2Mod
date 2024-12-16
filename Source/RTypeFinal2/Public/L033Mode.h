#pragma once
#include "CoreMinimal.h"
#include "L033Mode.generated.h"

UENUM(BlueprintType)
enum class L033Mode : uint8 {
    M_FREE,
    M_SEARCH,
    NUM,
};

