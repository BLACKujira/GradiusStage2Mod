#pragma once
#include "CoreMinimal.h"
#include "EBS007_THRUST.generated.h"

UENUM(BlueprintType)
enum class EBS007_THRUST : uint8 {
    WAIT,
    FORWARD_L,
    FORWARD_S,
    KEEP_L,
    KEEP_S,
    BACK_L,
    BACK_S,
    INTERVAL,
    DEATH,
    NUM,
};

