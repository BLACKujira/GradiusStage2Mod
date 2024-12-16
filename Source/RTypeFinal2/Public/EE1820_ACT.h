#pragma once
#include "CoreMinimal.h"
#include "EE1820_ACT.generated.h"

UENUM(BlueprintType)
enum class EE1820_ACT : uint8 {
    IDLE,
    MOVE,
    LASERSIGN,
    LASER,
    WAIT,
    DEATH,
    NUM,
};

