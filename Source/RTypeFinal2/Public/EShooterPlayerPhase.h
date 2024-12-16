#pragma once
#include "CoreMinimal.h"
#include "EShooterPlayerPhase.generated.h"

UENUM(BlueprintType)
enum class EShooterPlayerPhase : uint8 {
    None,
    Ready,
    Play,
    Dead,
    Clear,
};

