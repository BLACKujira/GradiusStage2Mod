#pragma once
#include "CoreMinimal.h"
#include "L102BMode.generated.h"

UENUM(BlueprintType)
enum class L102BMode : uint8 {
    RAIL,
    PRE_KILL,
    NUM,
};

