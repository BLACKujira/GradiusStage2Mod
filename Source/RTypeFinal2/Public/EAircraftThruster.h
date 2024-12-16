#pragma once
#include "CoreMinimal.h"
#include "EAircraftThruster.generated.h"

UENUM(BlueprintType)
enum class EAircraftThruster : uint8 {
    UP,
    DOWN,
    LEFT,
    RIGHT,
    NUM,
};

