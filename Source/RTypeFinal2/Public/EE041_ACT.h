#pragma once
#include "CoreMinimal.h"
#include "EE041_ACT.generated.h"

UENUM(BlueprintType)
enum class EE041_ACT : uint8 {
    APP,
    FLY,
    TURN,
    DEATH,
    NUM,
};

