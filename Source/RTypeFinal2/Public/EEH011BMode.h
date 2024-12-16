#pragma once
#include "CoreMinimal.h"
#include "EEH011BMode.generated.h"

UENUM(BlueprintType)
enum class EEH011BMode : uint8 {
    APP,
    LOOP,
    BYE,
    NUM,
};

