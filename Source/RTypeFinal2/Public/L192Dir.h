#pragma once
#include "CoreMinimal.h"
#include "L192Dir.generated.h"

UENUM(BlueprintType)
enum class L192Dir : uint8 {
    UP,
    DOWN,
    RIGHT,
    LEFT,
    NUM,
};

