#pragma once
#include "CoreMinimal.h"
#include "L059Mode.generated.h"

UENUM(BlueprintType)
enum class L059Mode : uint8 {
    RAIL,
    SEARCH,
    PRE_KILL,
    NUM,
};

