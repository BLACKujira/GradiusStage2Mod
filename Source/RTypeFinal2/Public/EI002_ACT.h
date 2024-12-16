#pragma once
#include "CoreMinimal.h"
#include "EI002_ACT.generated.h"

UENUM(BlueprintType)
enum class EI002_ACT : uint8 {
    FLY,
    STAY,
    DEATH,
    NUM,
};

