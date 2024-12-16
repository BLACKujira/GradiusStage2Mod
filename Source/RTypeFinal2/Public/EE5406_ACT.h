#pragma once
#include "CoreMinimal.h"
#include "EE5406_ACT.generated.h"

UENUM(BlueprintType)
enum class EE5406_ACT : uint8 {
    MOVE_V1,
    MOVE_H,
    MOVE_V2,
    MISSILE,
    DEATH,
    NUM,
};

