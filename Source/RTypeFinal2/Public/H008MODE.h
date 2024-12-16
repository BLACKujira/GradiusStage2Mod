#pragma once
#include "CoreMinimal.h"
#include "H008MODE.generated.h"

UENUM(BlueprintType)
enum class H008MODE : uint8 {
    GROW,
    KEEP,
    DECAY,
    DEAD,
    NUM,
};

