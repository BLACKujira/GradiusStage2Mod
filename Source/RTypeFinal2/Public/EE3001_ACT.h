#pragma once
#include "CoreMinimal.h"
#include "EE3001_ACT.generated.h"

UENUM(BlueprintType)
enum class EE3001_ACT : uint8 {
    WAIT,
    SEARCH,
    SIGN,
    ATTACK,
    SEPARATE,
    DSIGN,
    DESTRUCT,
    DEATH,
    NUM,
};

