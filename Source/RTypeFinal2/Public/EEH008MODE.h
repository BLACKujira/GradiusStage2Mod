#pragma once
#include "CoreMinimal.h"
#include "EEH008MODE.generated.h"

UENUM(BlueprintType)
enum class EEH008MODE : uint8 {
    GROW,
    KEEP,
    DECAY,
    DEAD,
    NUM,
};

