#pragma once
#include "CoreMinimal.h"
#include "EP000_ACT.generated.h"

UENUM(BlueprintType)
enum class EP000_ACT : uint8 {
    APP,
    FLY,
    DEATH,
    DEAD,
    MENU,
    C_DEATH,
    NUM,
};

