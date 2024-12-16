#pragma once
#include "CoreMinimal.h"
#include "H012MODE.generated.h"

UENUM(BlueprintType)
enum class H012MODE : uint8 {
    GROW,
    KEEP,
    DEAD,
    NUM,
};

