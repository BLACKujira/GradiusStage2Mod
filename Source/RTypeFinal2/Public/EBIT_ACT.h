#pragma once
#include "CoreMinimal.h"
#include "EBIT_ACT.generated.h"

UENUM(BlueprintType)
enum class EBIT_ACT : uint8 {
    UNKNOWN,
    FLOAT,
    SHOOT,
    MENU,
    NUM,
};

