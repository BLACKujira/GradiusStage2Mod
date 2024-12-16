#pragma once
#include "CoreMinimal.h"
#include "EBS016Bug_ACT.generated.h"

UENUM(BlueprintType)
enum class EBS016Bug_ACT : uint8 {
    SIGN,
    FIRST_MOVE,
    STAY,
    SECOND_MOVE,
    DEATH,
    NUM,
};

