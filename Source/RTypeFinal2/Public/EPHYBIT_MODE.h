#pragma once
#include "CoreMinimal.h"
#include "EPHYBIT_MODE.generated.h"

UENUM(BlueprintType)
enum class EPHYBIT_MODE : uint8 {
    UNKNOWN,
    NORMAL,
    SHOOT,
    SEARCH,
    RETURN,
    NUM,
};

