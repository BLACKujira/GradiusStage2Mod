#pragma once
#include "CoreMinimal.h"
#include "EE5201_ACT.generated.h"

UENUM(BlueprintType)
enum class EE5201_ACT : uint8 {
    APP,
    MOVE,
    STOP,
    DEATH,
    NUM,
};

