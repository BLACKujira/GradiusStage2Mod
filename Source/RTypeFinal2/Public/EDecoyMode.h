#pragma once
#include "CoreMinimal.h"
#include "EDecoyMode.generated.h"

UENUM(BlueprintType)
enum class EDecoyMode : uint8 {
    APP,
    LOOP,
    BYE,
    NUM,
};

