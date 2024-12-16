#pragma once
#include "CoreMinimal.h"
#include "EAircraftSE.generated.h"

UENUM(BlueprintType)
enum class EAircraftSE : uint8 {
    SE_SpdUp,
    SE_SpdDown,
    SE_Charge1,
    SE_Charge1L,
    SE_Charge2,
    SE_Charge2L,
    SE_ChargeX,
    SE_ChargeFULL,
    SE_GetPowerUp,
    SE_GetOthers,
    SE_Dead,
    NUM,
};

