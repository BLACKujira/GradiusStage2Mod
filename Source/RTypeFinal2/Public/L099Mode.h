#pragma once
#include "CoreMinimal.h"
#include "L099Mode.generated.h"

UENUM(BlueprintType)
enum class L099Mode : uint8 {
    START,
    MAIN,
    END,
    DEATH,
    NUM,
};

