#pragma once
#include "CoreMinimal.h"
#include "EAircraftSpeedLevel.generated.h"

UENUM(BlueprintType)
enum class EAircraftSpeedLevel : uint8 {
    Level0,
    Level1,
    Level2,
    Level3,
    NUM,
};

