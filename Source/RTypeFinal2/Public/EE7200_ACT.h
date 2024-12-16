#pragma once
#include "CoreMinimal.h"
#include "EE7200_ACT.generated.h"

UENUM(BlueprintType)
enum class EE7200_ACT : uint8 {
    MOVE,
    DECELE,
    ACCELE,
    DEATH,
    DEATHAT,
    NUM,
};

