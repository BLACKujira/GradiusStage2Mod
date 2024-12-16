#pragma once
#include "CoreMinimal.h"
#include "EMANUAL_CATEGORY.generated.h"

UENUM(BlueprintType)
enum class EMANUAL_CATEGORY : uint8 {
    MANEUVER_MAN,
    DEV_MAN,
    HIS_MAN,
    SUB_MAN,
    PLN_MAN,
    SYS_MAN,
};

