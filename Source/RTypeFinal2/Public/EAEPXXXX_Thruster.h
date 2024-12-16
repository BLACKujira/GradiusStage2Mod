#pragma once
#include "CoreMinimal.h"
#include "EAEPXXXX_Thruster.generated.h"

UENUM(BlueprintType)
enum class EAEPXXXX_Thruster : uint8 {
    UP,
    DOWN,
    LEFT,
    RIGHT,
    NUM,
};

