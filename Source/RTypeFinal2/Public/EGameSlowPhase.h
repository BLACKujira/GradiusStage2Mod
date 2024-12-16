#pragma once
#include "CoreMinimal.h"
#include "EGameSlowPhase.generated.h"

UENUM(BlueprintType)
enum class EGameSlowPhase : uint8 {
    None,
    Press,
    Hold,
    Release,
    ReleaseLoop,
};

