#pragma once
#include "CoreMinimal.h"
#include "EE5402_ACT.generated.h"

UENUM(BlueprintType)
enum class EE5402_ACT : uint8 {
    APP,
    MOVE,
    DEATH,
    NUM,
};

