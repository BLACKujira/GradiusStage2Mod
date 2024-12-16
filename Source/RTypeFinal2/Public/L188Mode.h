#pragma once
#include "CoreMinimal.h"
#include "L188Mode.generated.h"

UENUM(BlueprintType)
enum class L188Mode : uint8 {
    M_FREE,
    M_SEARCH,
    M_FALL,
    NUM,
};

