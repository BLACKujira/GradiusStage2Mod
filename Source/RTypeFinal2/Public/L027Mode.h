#pragma once
#include "CoreMinimal.h"
#include "L027Mode.generated.h"

UENUM(BlueprintType)
enum class L027Mode : uint8 {
    M_FREE,
    M_SEARCH,
    NUM,
};

