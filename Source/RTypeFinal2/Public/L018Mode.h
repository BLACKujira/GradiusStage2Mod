#pragma once
#include "CoreMinimal.h"
#include "L018Mode.generated.h"

UENUM(BlueprintType)
enum class L018Mode : uint8 {
    GROW,
    KEEP,
    DECAY,
    NUM,
};

