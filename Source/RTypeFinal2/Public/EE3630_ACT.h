#pragma once
#include "CoreMinimal.h"
#include "EE3630_ACT.generated.h"

UENUM(BlueprintType)
enum class EE3630_ACT : uint8 {
    IDLE,
    FALL,
    LAND,
    DEATH,
    NUM,
};

