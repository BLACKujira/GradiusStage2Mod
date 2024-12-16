#pragma once
#include "CoreMinimal.h"
#include "EBS016Croc_ACT.generated.h"

UENUM(BlueprintType)
enum class EBS016Croc_ACT : uint8 {
    SIGN,
    POP,
    STAY,
    BACK,
    DEATH,
    NUM,
};

