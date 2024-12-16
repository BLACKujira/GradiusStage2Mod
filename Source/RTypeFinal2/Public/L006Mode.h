#pragma once
#include "CoreMinimal.h"
#include "L006Mode.generated.h"

UENUM(BlueprintType)
enum class L006Mode : uint8 {
    GROW,
    KEEP,
    DECAY,
    NUM,
};

