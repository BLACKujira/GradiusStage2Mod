#pragma once
#include "CoreMinimal.h"
#include "L186Mode.generated.h"

UENUM(BlueprintType)
enum class L186Mode : uint8 {
    M_FREE,
    M_SEARCH,
    NUM,
};

