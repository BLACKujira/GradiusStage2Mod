#pragma once
#include "CoreMinimal.h"
#include "EBS707_ACT.generated.h"

UENUM(BlueprintType)
enum class EBS707_ACT : uint8 {
    WAIT,
    ATTACK,
    DEATH,
    NUM,
};

