#pragma once
#include "CoreMinimal.h"
#include "EGhostLoadPhase.generated.h"

UENUM(BlueprintType)
enum class EGhostLoadPhase : uint8 {
    Idle,
    Loading,
    Loaded,
};

