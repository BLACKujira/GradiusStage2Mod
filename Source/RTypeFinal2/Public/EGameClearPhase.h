#pragma once
#include "CoreMinimal.h"
#include "EGameClearPhase.generated.h"

UENUM(BlueprintType)
enum class EGameClearPhase : uint8 {
    None,
    Event,
    Capture,
    Achievement,
    Setup,
    FadeIn,
    Load,
    WaitErrorDialog,
};

