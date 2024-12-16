#pragma once
#include "CoreMinimal.h"
#include "H059MODE.generated.h"

UENUM(BlueprintType)
enum class H059MODE : uint8 {
    GROW,
    KEEP,
    DECAY,
    DEAD,
    NUM,
};

