#pragma once
#include "CoreMinimal.h"
#include "EMISSILE_NO.generated.h"

UENUM(BlueprintType)
enum class EMISSILE_NO : uint8 {
    MS_H,
    MS_F,
    MS_T,
    MS_V,
    MS_VG,
    MS_HH,
    MS_4W,
    MS_6W,
    MS_HE,
    MS_HU,
    MS_B0,
    MS_B1,
    MS_XM,
    MS_EB,
    MS_ES,
    MS_WT,
    MS_AA,
    MS_EV,
    MS_FS,
    MS_FB,
    MS_T2,
    NUM,
    MS__ = 255,
    MS_XX = MS_H,
};

