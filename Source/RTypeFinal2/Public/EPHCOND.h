#pragma once
#include "CoreMinimal.h"
#include "EPHCOND.generated.h"

UENUM(BlueprintType)
enum class EPHCOND : uint8 {
    PHCOND_ALWAYS,
    PHCOND_NEVER,
    PHCOND_FIGHTER,
    PHCOND_FSTAGE,
    PHCOND_SHOP,
    NUM,
};

