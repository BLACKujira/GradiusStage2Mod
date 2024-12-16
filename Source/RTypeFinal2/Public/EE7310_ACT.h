#pragma once
#include "CoreMinimal.h"
#include "EE7310_ACT.generated.h"

UENUM(BlueprintType)
enum class EE7310_ACT : uint8 {
    MOVE,
    SEARCH,
    RETREAT,
    DEATH,
    DEATHAT,
    NUM,
};

