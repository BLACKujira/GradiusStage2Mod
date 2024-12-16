#pragma once
#include "CoreMinimal.h"
#include "H019MODE.generated.h"

UENUM(BlueprintType)
enum class H019MODE : uint8 {
    GROW,
    KEEP,
    DECAY,
    DEAD,
    NUM,
};

