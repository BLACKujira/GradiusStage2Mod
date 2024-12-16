#pragma once
#include "CoreMinimal.h"
#include "ECCOND.generated.h"

UENUM(BlueprintType)
enum class ECCOND : uint8 {
    CCOND_ALWAYS,
    CCOND_NEVER,
    CCOND_STAGE,
    CCOND_BYDO,
    CCOND_FIGHTER,
    CCOND_NOMISS,
    NUM,
};

