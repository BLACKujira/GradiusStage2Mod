#pragma once
#include "CoreMinimal.h"
#include "EEH006DecoyMode.generated.h"

UENUM(BlueprintType)
enum class EEH006DecoyMode : uint8 {
    APP,
    LOOP,
    BYE,
    NUM,
};

