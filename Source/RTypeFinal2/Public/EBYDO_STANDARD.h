#pragma once
#include "CoreMinimal.h"
#include "EBYDO_STANDARD.generated.h"

UENUM(BlueprintType)
enum class EBYDO_STANDARD : uint8 {
    None,
    BYDO,
    LARGE_BYDO,
    HUGE_BYDO,
    HUMAN_KIND,
    OTHER,
    MUDDY,
    DAS,
};

