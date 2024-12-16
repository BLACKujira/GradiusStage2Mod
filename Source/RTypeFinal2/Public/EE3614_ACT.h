#pragma once
#include "CoreMinimal.h"
#include "EE3614_ACT.generated.h"

UENUM(BlueprintType)
enum class EE3614_ACT : uint8 {
    IDLE,
    FALL,
    DEATH,
    NUM,
};

