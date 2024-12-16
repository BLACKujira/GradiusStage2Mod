#include "M019DataAsset.h"

UM019DataAsset::UM019DataAsset() {
    this->GROUND_DISTANCE = 600.00f;
    this->AP = 50.00f;
    this->AP2 = 50.00f;
    this->SPEED0 = 2000.00f;
    this->speed = 6000.00f;
    this->ACCEL_TIME = 0.70f;
    this->TURN_TIME = 0.50f;
    this->LAUNCH_TIME = 0.30f;
    this->SEARCH_LIMIT_TIME = 3.00f;
    this->SEARCH_LIMIT_DANG = 360.00f;
    this->REJECT_LIMIT_DANG = 600.00f;
    this->BODY_R = 100.00f;
    this->BODY_LEN = 600.00f;
    this->CENTER_OFS = 225.00f;
    this->SHOT_OFS = 300.00f;
    this->SHOT_ANGLE[0] = 120.00f;
    this->SHOT_ANGLE[1] = 120.00f;
    this->SHOT_ANGLE[2] = 120.00f;
    this->SHOT_ANGLE2[0] = 150.00f;
    this->SHOT_ANGLE2[1] = 150.00f;
    this->SHOT_ANGLE2[2] = 150.00f;
    this->SHOT_ANGLE2[3] = 150.00f;
    this->SHOT_ANGLE2[4] = 150.00f;
    this->BodyRadius_B = 250.00f;
    this->AttackRadius_B = 1000.00f;
    this->AP_B = 50.00f;
    this->AP2_B = 50.00f;
    this->APB_B = 100.00f;
    this->APB2_B = 100.00f;
    this->Gravity_B = 15000.00f;
    this->SpeedDec_B = 1000.00f;
    this->MoveSpeedMax_B = 5000.00f;
    this->FallSpeedMax_B = 10000.00f;
    this->BounceRate_B = 0.80f;
    this->RotSpeed_B = 0.00f;
    this->ShotInterval_B = 0.25f;
    this->SelfBlastTime_B = 1.33f;
    this->KeepBlastTime_B = 0.08f;
    this->PostBlastTime_B = 0.80f;
}


