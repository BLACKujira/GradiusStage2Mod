#pragma once
#include "CoreMinimal.h"
#include "EE240_ACT.generated.h"

UENUM(BlueprintType)
enum class EE240_ACT : uint8 {
    APP,
    NORMAL,
    TO_BITE,
    BITE,
    TO_NORMAL,
    DEATH,
    NUM,
};

