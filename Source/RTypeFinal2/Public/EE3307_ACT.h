#pragma once
#include "CoreMinimal.h"
#include "EE3307_ACT.generated.h"

UENUM(BlueprintType)
enum class EE3307_ACT : uint8 {
    FLY,
    ACC,
    RE,
    DEATH,
    NUM,
};

