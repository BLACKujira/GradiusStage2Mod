#pragma once
#include "CoreMinimal.h"
#include "L110Mode.generated.h"

UENUM(BlueprintType)
enum class L110Mode : uint8 {
    M_FREE,
    M_SEARCH,
    NUM,
};

