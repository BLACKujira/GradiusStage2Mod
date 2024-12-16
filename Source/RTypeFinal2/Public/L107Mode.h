#pragma once
#include "CoreMinimal.h"
#include "L107Mode.generated.h"

UENUM(BlueprintType)
enum class L107Mode : uint8 {
    GROW,
    KEEP,
    DECAY,
    NUM,
};

