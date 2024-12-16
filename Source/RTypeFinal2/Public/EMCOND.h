#pragma once
#include "CoreMinimal.h"
#include "EMCOND.generated.h"

UENUM(BlueprintType)
enum class EMCOND : uint8 {
    MCOND_ALWAYS,
    MCOND_NEVER,
    MCOND_STAGE,
    MCOND_FINAL,
    MCOND_NOMISS,
    MCOND_BYDO,
    MCOND_ITEM,
    MCOND_FULLPOWER,
    MCOND_FIGHTER,
    MCOND_LIMITCLEAR,
    MCOND_DEV_FIGHTER,
    NUM,
};

