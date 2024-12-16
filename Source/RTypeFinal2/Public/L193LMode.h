#pragma once
#include "CoreMinimal.h"
#include "L193LMode.generated.h"

UENUM(BlueprintType)
enum class L193LMode : uint8 {
    FIRE,
    POSTFIRE,
    CROSS,
    NUM,
};

