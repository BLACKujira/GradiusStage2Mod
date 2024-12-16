#pragma once
#include "CoreMinimal.h"
#include "EE3610_ACT.generated.h"

UENUM(BlueprintType)
enum class EE3610_ACT : uint8 {
    IDLE,
    FALL,
    SINK,
    DEATH,
    NUM,
};

