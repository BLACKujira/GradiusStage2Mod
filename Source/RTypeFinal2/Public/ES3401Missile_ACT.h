#pragma once
#include "CoreMinimal.h"
#include "ES3401Missile_ACT.generated.h"

UENUM(BlueprintType)
enum class ES3401Missile_ACT : uint8 {
    WAIT,
    FLY,
    DEATH,
    NUM,
};

