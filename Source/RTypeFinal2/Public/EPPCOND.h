#pragma once
#include "CoreMinimal.h"
#include "EPPCOND.generated.h"

UENUM(BlueprintType)
enum class EPPCOND : uint8 {
    PPCOND_ALWAYS,
    PPCOND_NEVER,
    PPCOND_FIGHTER,
    PPCOND_FSTAGE,
    PPCOND_SHOP,
    NUM,
};

