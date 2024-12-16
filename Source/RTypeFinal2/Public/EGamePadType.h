#pragma once
#include "CoreMinimal.h"
#include "EGamePadType.generated.h"

UENUM(BlueprintType)
enum class EGamePadType : uint8 {
    None,
    XBOX,
    SWITCH,
    PS4,
    NUM,
};

