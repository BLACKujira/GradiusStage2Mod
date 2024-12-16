#pragma once
#include "CoreMinimal.h"
#include "EPublisherId.generated.h"

UENUM(BlueprintType)
enum class EPublisherId : uint8 {
    Granzella,
    NISA,
    DigitalTouch,
    JUSTDAN,
    NUM,
};

