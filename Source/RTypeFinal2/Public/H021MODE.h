#pragma once
#include "CoreMinimal.h"
#include "H021MODE.generated.h"

UENUM(BlueprintType)
enum class H021MODE : uint8 {
    GROW,
    KEEP,
    DEAD,
    NUM,
};

