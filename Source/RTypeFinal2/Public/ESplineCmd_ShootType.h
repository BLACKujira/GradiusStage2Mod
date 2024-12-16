#pragma once
#include "CoreMinimal.h"
#include "ESplineCmd_ShootType.generated.h"

UENUM(BlueprintType)
enum class ESplineCmd_ShootType : uint8 {
    NORMAL,
    SHOCKWAVE_LOOP1,
    SHOCKWAVE_LOOP2,
    SHOCKWAVE_LOOP3,
    SHOCKWAVE_LOOP4,
    SHOCKWAVE_LOOP5,
    SHOCKWAVE_LOOP6,
    SHOCKWAVE_LOOP7,
    SHOCKWAVE_LOOP8,
};

