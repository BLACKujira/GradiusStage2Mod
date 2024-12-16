#pragma once
#include "CoreMinimal.h"
#include "L102Mode.generated.h"

UENUM(BlueprintType)
enum class L102Mode : uint8 {
    RAIL,
    PRE_KILL,
    NUM,
};

