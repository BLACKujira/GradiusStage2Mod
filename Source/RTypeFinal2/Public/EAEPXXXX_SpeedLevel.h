#pragma once
#include "CoreMinimal.h"
#include "EAEPXXXX_SpeedLevel.generated.h"

UENUM(BlueprintType)
enum class EAEPXXXX_SpeedLevel : uint8 {
    Level0,
    Level1,
    Level2,
    Level3,
    NUM,
};

