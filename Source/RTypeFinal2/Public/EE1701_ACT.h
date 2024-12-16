#pragma once
#include "CoreMinimal.h"
#include "EE1701_ACT.generated.h"

UENUM(BlueprintType)
enum class EE1701_ACT : uint8 {
    RAIL,
    SERARCH,
    RETREAT,
    DEATH,
    NUM,
};

