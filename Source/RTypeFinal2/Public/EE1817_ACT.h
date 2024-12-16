#pragma once
#include "CoreMinimal.h"
#include "EE1817_ACT.generated.h"

UENUM(BlueprintType)
enum class EE1817_ACT : uint8 {
    APP,
    WAIT,
    SHOT,
    DEATH,
    NUM,
};

