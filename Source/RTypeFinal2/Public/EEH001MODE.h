#pragma once
#include "CoreMinimal.h"
#include "EEH001MODE.generated.h"

UENUM(BlueprintType)
enum class EEH001MODE : uint8 {
    GROW,
    KEEP,
    DECAY,
    DEAD,
    NUM,
};

