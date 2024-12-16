#pragma once
#include "CoreMinimal.h"
#include "ESplineCmd_Command.generated.h"

UENUM(BlueprintType)
enum class ESplineCmd_Command : uint8 {
    SPD,
    SPDACC,
    HIT,
    CHANGE_DIR,
    CHANGE_PITCH,
    CHANGE_YAW,
    CHANGE_ROLL,
    CHARGE_START,
    CHARGE_END,
    SHOOT_START,
    SHOOT_END,
    BACKFIRE,
    EVENT,
    LASER_R,
    LASER_B,
    LASER_Y,
    LASER_STOP,
    MISSILE_START,
    MISSILE_STOP,
    CHARGE_START_LV,
    SPEED_LV,
    SCRHIT_ON,
    SCRHIT_OFF,
    DEAD,
    EVENT2,
    WSHOT_START,
    WSHOT_STOP,
    EVENT3,
    EVENT4,
};

