#pragma once
#include "CoreMinimal.h"
#include "H025MODE.generated.h"

UENUM(BlueprintType)
enum class H025MODE : uint8 {
    GROW,
    SHRINK,
    END,
    NUM,
};

