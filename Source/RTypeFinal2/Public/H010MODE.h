#pragma once
#include "CoreMinimal.h"
#include "H010MODE.generated.h"

UENUM(BlueprintType)
enum class H010MODE : uint8 {
    GROW,
    KEEP,
    DECAY,
    DEAD,
    NUM,
};

