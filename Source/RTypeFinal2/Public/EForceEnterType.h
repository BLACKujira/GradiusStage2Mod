#pragma once
#include "CoreMinimal.h"
#include "EForceEnterType.generated.h"

UENUM(BlueprintType)
enum class EForceEnterType : uint8 {
    LEFT,
    BOTTOM,
    RIGHT,
    TOP,
    NUM,
};

