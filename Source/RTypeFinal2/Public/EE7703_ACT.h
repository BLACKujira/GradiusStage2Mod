#pragma once
#include "CoreMinimal.h"
#include "EE7703_ACT.generated.h"

UENUM(BlueprintType)
enum class EE7703_ACT : uint8 {
    APP,
    CHARGE,
    READY,
    SHOT,
    WAIT,
    DEATH,
    NUM,
};

