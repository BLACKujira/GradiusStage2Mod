#pragma once
#include "CoreMinimal.h"
#include "EBodyColorID.generated.h"

UENUM(BlueprintType)
enum class EBodyColorID : uint8 {
    BC_WHITE,
    BC_BLACK,
    BC_RED,
    BC_ORANGE,
    BC_YELLOW,
    BC_GREEN,
    BC_BLUE,
    BC_PURPLE,
    BC_GRAY,
    BC_PINK,
    BC_BROWN,
    BC_P1_ZEBRA,
    BC_P2_NAVY,
    BC_P3_ARMY,
    BC_P4_RD_WH,
    BC_P5_BL_GR,
    NUM,
    BC__ = BC_WHITE,
};

