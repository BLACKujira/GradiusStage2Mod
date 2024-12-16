#pragma once
#include "CoreMinimal.h"
#include "EAEPXXXX_Vibrations.generated.h"

UENUM(BlueprintType)
enum class EAEPXXXX_Vibrations : uint8 {
    VIB_WC_CHARGE_LP,
    VIB_WC_CHARGE_MAX_LP,
    VIB_WC_SHOOT_MAX UMETA(Hidden),
    VIB_FC_SHOOT,
    VIB_FC_DOCKING,
    VIB_DEATH,
    NUM,
};

