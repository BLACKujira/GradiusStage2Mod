#pragma once
#include "CoreMinimal.h"
#include "EPLCOND.generated.h"

UENUM(BlueprintType)
enum class EPLCOND : uint8 {
    PLCOND_ALWAYS,
    PLCOND_NEVER,
    PLCOND_POSE,
    PLCOND_FIGHTER,
    PLCOND_SHOP,
    PLCOND_BYDO,
    PLCOND_MONUMENT,
    NUM,
};

