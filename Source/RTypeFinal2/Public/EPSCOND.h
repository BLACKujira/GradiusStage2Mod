#pragma once
#include "CoreMinimal.h"
#include "EPSCOND.generated.h"

UENUM(BlueprintType)
enum class EPSCOND : uint8 {
    PSCOND_ALWAYS,
    PSCOND_NEVER,
    PSCOND_FIGHTER,
    PSCOND_FSTAGE,
    PSCOND_SHOP,
    NUM,
};

