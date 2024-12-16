#pragma once
#include "CoreMinimal.h"
#include "EDCOND.generated.h"

UENUM(BlueprintType)
enum class EDCOND : uint8 {
    DCOND_ALWAYS,
    DCOND_NEVER,
    DCOND_FSTAGE,
    DCOND_SHOP,
    DCOND_STAGE,
    NUM,
};

