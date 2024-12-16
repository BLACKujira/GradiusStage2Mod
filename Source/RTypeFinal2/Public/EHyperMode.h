#pragma once
#include "CoreMinimal.h"
#include "EHyperMode.generated.h"

UENUM(BlueprintType)
enum class EHyperMode : uint8 {
    OFF,
    DISCHARGE,
    DISCHARGED,
    RECHARGED,
    SHOT,
    BYE,
    NUM,
};

