#pragma once
#include "CoreMinimal.h"
#include "H002MODE.generated.h"

UENUM(BlueprintType)
enum class H002MODE : uint8 {
    IDLE,
    GROW,
    KEEP,
    SPREAD,
    DECAY,
    DEAD,
    NUM,
};

