#pragma once
#include "CoreMinimal.h"
#include "EScreenActor_TiltId.generated.h"

UENUM(BlueprintType)
enum class EScreenActor_TiltId : uint8 {
    TILT_1,
    TILT_2,
    PAN_1,
    PAN_2,
    NUM,
    START_PAN = PAN_1,
};

