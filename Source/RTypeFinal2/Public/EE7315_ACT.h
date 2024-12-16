#pragma once
#include "CoreMinimal.h"
#include "EE7315_ACT.generated.h"

UENUM(BlueprintType)
enum class EE7315_ACT : uint8 {
    APP,
    SEARCH,
    ROTATE,
    RETREAT,
    DEATH,
    NUM,
};

