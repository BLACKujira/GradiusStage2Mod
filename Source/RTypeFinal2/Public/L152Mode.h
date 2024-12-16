#pragma once
#include "CoreMinimal.h"
#include "L152Mode.generated.h"

UENUM(BlueprintType)
enum class L152Mode : uint8 {
    GROW,
    KEEP,
    DECAY,
    NUM,
};

