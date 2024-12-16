#pragma once
#include "CoreMinimal.h"
#include "EE3631_ACT.generated.h"

UENUM(BlueprintType)
enum class EE3631_ACT : uint8 {
    IDLE,
    FALL,
    LAND,
    DEATH,
    NUM,
};

