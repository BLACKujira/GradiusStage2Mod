#pragma once
#include "CoreMinimal.h"
#include "EFORCE_ACT.generated.h"

UENUM(BlueprintType)
enum class EFORCE_ACT : uint8 {
    UNKNOWN,
    FRONT,
    REAR,
    ENTER,
    ENTER_2,
    SHOOT_FRONT,
    SHOOT_REAR,
    FLOAT,
    CALL_BACK,
    REJECT,
    EMERGENCY,
    SEARCH,
    SEARCH_2,
    BITE,
    DESTROY,
    WAIT,
    MENU,
    NUM,
};

