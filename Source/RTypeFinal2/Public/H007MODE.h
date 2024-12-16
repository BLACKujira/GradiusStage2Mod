#pragma once
#include "CoreMinimal.h"
#include "H007MODE.generated.h"

UENUM(BlueprintType)
enum class H007MODE : uint8 {
    GROW,
    KEEP,
    DECAY,
    DEAD,
    NUM,
};

