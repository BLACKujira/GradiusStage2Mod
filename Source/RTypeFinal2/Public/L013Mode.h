#pragma once
#include "CoreMinimal.h"
#include "L013Mode.generated.h"

UENUM(BlueprintType)
enum class L013Mode : uint8 {
    FIRE,
    POSTFIRE,
    CROSS,
    NUM,
};

