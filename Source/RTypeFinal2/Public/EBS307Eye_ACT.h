#pragma once
#include "CoreMinimal.h"
#include "EBS307Eye_ACT.generated.h"

UENUM(BlueprintType)
enum class EBS307Eye_ACT : uint8 {
    IDLE,
    SHOOT,
    RECOVER,
    DEATH,
    NUM,
};

