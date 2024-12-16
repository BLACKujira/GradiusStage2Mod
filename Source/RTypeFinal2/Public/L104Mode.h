#pragma once
#include "CoreMinimal.h"
#include "L104Mode.generated.h"

UENUM(BlueprintType)
enum class L104Mode : uint8 {
    GROW,
    KEEP,
    DECAY,
    NUM,
};

