#pragma once
#include "CoreMinimal.h"
#include "EH002MiniSWMODE.generated.h"

UENUM(BlueprintType)
enum class EH002MiniSWMODE : uint8 {
    IDLE,
    DELAY,
    ACIVE,
    DEAD,
    NUM,
};

