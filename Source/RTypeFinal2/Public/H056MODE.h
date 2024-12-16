#pragma once
#include "CoreMinimal.h"
#include "H056MODE.generated.h"

UENUM(BlueprintType)
enum class H056MODE : uint8 {
    GROW,
    KEEP,
    DECAY,
    DEAD,
    NUM,
};

