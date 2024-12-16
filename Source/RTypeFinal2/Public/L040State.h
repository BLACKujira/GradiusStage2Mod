#pragma once
#include "CoreMinimal.h"
#include "L040State.generated.h"

UENUM(BlueprintType)
enum class L040State : uint8 {
    STOP,
    ROLL,
    STOPING,
    NUM,
};

