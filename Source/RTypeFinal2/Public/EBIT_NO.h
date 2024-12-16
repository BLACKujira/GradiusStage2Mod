#pragma once
#include "CoreMinimal.h"
#include "EBIT_NO.generated.h"

UENUM(BlueprintType)
enum class EBIT_NO : uint8 {
    BT_A,
    BT_SL,
    BT_C,
    BT_SH,
    BT_E,
    BT_RP,
    BT_BP,
    BT_PHY,
    BT_PHZ,
    BT_X,
    BT_YP,
    BT_GP,
    BT_MS,
    BT_PP,
    BT_D,
    NUM,
    BT__ = 255,
    BT_XX = BT_A,
};

