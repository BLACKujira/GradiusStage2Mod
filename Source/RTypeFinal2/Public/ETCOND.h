#pragma once
#include "CoreMinimal.h"
#include "ETCOND.generated.h"

UENUM(BlueprintType)
enum class ETCOND : uint8 {
    TCOND_ALWAYS,
    TCOND_NEVER,
    NUM,
};

