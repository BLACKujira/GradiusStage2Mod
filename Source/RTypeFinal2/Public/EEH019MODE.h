#pragma once
#include "CoreMinimal.h"
#include "EEH019MODE.generated.h"

UENUM(BlueprintType)
enum class EEH019MODE : uint8 {
    GROW,
    KEEP,
    DECAY,
    DEAD,
    NUM,
};

