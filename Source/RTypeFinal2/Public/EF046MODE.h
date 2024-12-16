#pragma once
#include "CoreMinimal.h"
#include "EF046MODE.generated.h"

UENUM(BlueprintType)
enum class EF046MODE : uint8 {
    DISABLE,
    TO_GOAL,
    TO_0_2,
};

