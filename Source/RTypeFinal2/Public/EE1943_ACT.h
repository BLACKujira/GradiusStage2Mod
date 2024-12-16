#pragma once
#include "CoreMinimal.h"
#include "EE1943_ACT.generated.h"

UENUM(BlueprintType)
enum class EE1943_ACT : uint8 {
    SEARCH,
    CHARGE,
    START,
    BEAM,
    END,
    DEATH,
    NUM,
};

