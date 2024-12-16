#pragma once
#include "CoreMinimal.h"
#include "EBYDO_CLASS2.generated.h"

UENUM(BlueprintType)
enum class EBYDO_CLASS2 : uint8 {
    None,
    GROUND,
    AIR,
    ON_WATER,
    UNDER_WATER,
    OTHER,
};

