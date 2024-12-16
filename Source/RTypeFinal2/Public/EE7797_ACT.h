#pragma once
#include "CoreMinimal.h"
#include "EE7797_ACT.generated.h"

UENUM(BlueprintType)
enum class EE7797_ACT : uint8 {
    APP,
    DECELERATE,
    STOP,
    DEATH,
    NUM,
};

