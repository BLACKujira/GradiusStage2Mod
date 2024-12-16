#pragma once
#include "CoreMinimal.h"
#include "EE5407_ACT.generated.h"

UENUM(BlueprintType)
enum class EE5407_ACT : uint8 {
    IDLE,
    MOVE,
    LASERSIGN,
    LASER,
    WAIT,
    DEATH,
    NUM,
};

