#pragma once
#include "CoreMinimal.h"
#include "EGCOND.generated.h"

UENUM(BlueprintType)
enum class EGCOND : uint8 {
    GCOND_ALWAYS,
    GCOND_NEVER,
    GCOND_PLAYCNT,
    GCOND_STAGE,
    GCOND_FIGHTER_U,
    GCOND_FIGHTER_D,
    GCOND_MISSILE,
    NUM,
};

