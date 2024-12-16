#pragma once
#include "CoreMinimal.h"
#include "EH011BMode.generated.h"

UENUM(BlueprintType)
enum class EH011BMode : uint8 {
    APP,
    LOOP,
    BYE,
    NUM,
};

