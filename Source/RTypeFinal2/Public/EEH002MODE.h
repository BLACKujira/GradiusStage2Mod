#pragma once
#include "CoreMinimal.h"
#include "EEH002MODE.generated.h"

UENUM(BlueprintType)
enum class EEH002MODE : uint8 {
    IDLE,
    GROW,
    KEEP,
    SPREAD,
    DECAY,
    DEAD,
    NUM,
};

