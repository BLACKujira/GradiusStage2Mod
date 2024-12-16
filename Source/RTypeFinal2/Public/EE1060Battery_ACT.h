#pragma once
#include "CoreMinimal.h"
#include "EE1060Battery_ACT.generated.h"

UENUM(BlueprintType)
enum class EE1060Battery_ACT : uint8 {
    FLY,
    FALL,
    LAND,
    DEATH,
    NUM,
};

