#pragma once
#include "CoreMinimal.h"
#include "EAEPXXXX_SE.generated.h"

UENUM(BlueprintType)
enum class EAEPXXXX_SE : uint8 {
    SE_SpdUp,
    SE_SpdDown,
    SE_Charge1,
    SE_Charge2,
    SE_GetPowerUp,
    SE_GetOthers,
    SE_Dead,
    NUM,
};

