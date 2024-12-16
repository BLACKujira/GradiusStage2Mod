#pragma once
#include "CoreMinimal.h"
#include "EEH010MODE.generated.h"

UENUM(BlueprintType)
enum class EEH010MODE : uint8 {
    GROW,
    KEEP,
    DECAY,
    DEAD,
    NUM,
};

