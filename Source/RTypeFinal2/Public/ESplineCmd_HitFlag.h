#pragma once
#include "CoreMinimal.h"
#include "ESplineCmd_HitFlag.generated.h"

UENUM(BlueprintType)
enum class ESplineCmd_HitFlag : uint8 {
    None,
    HIT,
    HIT_TRG,
};

