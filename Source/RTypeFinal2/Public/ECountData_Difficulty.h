#pragma once
#include "CoreMinimal.h"
#include "ECountData_Difficulty.generated.h"

UENUM(BlueprintType)
enum class ECountData_Difficulty : uint8 {
    NONE,
    VERYEASY,
    EASY,
    NORMAL,
    HARD,
    VERYHARD,
    VERYHARD2,
    VERYHARD3,
    LOGIC_GE = 16,
    LOGIC_LE = 32,
    GE_VERYEASY = 17,
    GE_EASY,
    GE_NORMAL,
    GE_HARD,
    GE_VERYHARD,
    GE_VERYHARD2,
    GE_VERYHARD3,
    LE_VERYEASY = 33,
    LE_EASY,
    LE_NORMAL,
    LE_HARD,
    LE_VERYHARD,
    LE_VERYHARD2,
    LE_VERYHARD3,
    MASK_VALUE = 15,
    MASK_LOGIC = 240,
};

