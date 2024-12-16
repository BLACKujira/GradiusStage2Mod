#pragma once
#include "CoreMinimal.h"
#include "RADAR_MODE.generated.h"

UENUM(BlueprintType)
enum class RADAR_MODE : uint8 {
    NONE,
    FREE,
    FRONT,
    REAR,
    NUM,
};

