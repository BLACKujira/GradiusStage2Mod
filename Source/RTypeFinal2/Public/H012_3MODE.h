#pragma once
#include "CoreMinimal.h"
#include "H012_3MODE.generated.h"

UENUM(BlueprintType)
enum class H012_3MODE : uint8 {
    RAIL,
    SEARCH,
    XCTRL,
    NUM,
};

