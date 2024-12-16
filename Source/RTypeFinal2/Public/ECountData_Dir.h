#pragma once
#include "CoreMinimal.h"
#include "ECountData_Dir.generated.h"

UENUM(BlueprintType)
enum class ECountData_Dir : uint8 {
    L,
    R,
    U,
    D,
    LU,
    RD,
    LD,
    RU,
    L_D = L,
    R_D = R,
    U_D = U,
    D_D = D,
    LU_D = LU,
    RD_D = RD,
    LD_D = LD,
    RU_D = RU,
    L_U,
    R_U,
    U_U,
    D_U,
    LU_U,
    RD_U,
    LD_U,
    RU_U,
};

