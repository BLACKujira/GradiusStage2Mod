#pragma once
#include "CoreMinimal.h"
#include "S1181WhipMode.generated.h"

UENUM(BlueprintType)
enum class S1181WhipMode : uint8 {
    GROW,
    KEEP,
    DECAY,
    NUM,
};

