#pragma once
#include "CoreMinimal.h"
#include "H055MODE.generated.h"

UENUM(BlueprintType)
enum class H055MODE : uint8 {
    GROW,
    KEEP,
    DECAY,
    DEAD,
    NUM,
};

