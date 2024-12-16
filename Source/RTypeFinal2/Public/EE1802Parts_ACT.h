#pragma once
#include "CoreMinimal.h"
#include "EE1802Parts_ACT.generated.h"

UENUM(BlueprintType)
enum class EE1802Parts_ACT : uint8 {
    READY,
    FLY,
    DEATH,
    KILLED,
    NUM,
};

