#pragma once
#include "CoreMinimal.h"
#include "EE3616_ACT.generated.h"

UENUM(BlueprintType)
enum class EE3616_ACT : uint8 {
    IDLE,
    RECOVER,
    DEATH,
    NUM,
};

