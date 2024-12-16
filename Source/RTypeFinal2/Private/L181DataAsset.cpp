#include "L181DataAsset.h"

UL181DataAsset::UL181DataAsset() {
    this->Hp = 1.00f;
    this->AP_LV1 = 120.00f;
    this->AP_LV2 = 140.00f;
    this->AP_Explosion_LV1 = 120.00f;
    this->AP_Explosion_LV2 = 140.00f;
    this->Torpedo_LaunchSpeed = 10000.00f;
    this->Torpedo_LaunchSpeedTime = 0.50f;
    this->Torpedo_AcceleTime = 0.50f;
    this->Torpedo_Acceleration = 20000.00f;
    this->Torpedo_RollSpeed = 720.00f;
    this->Torpedo_Radius_LV1 = 125.00f;
    this->Torpedo_HalfLength_LV1 = 550.00f;
    this->Torpedo_TailLifeTime_LV1 = 0.50f;
    this->Torpedo_Radius_LV2 = 125.00f;
    this->Torpedo_HalfLength_LV2 = 700.00f;
    this->Torpedo_TailLifeTime_LV2 = 0.50f;
    this->Explosion_Radius_LV1 = 1250.00f;
    this->Explosion_Time_LV1 = 0.25f;
    this->Explosion_Radius_LV2 = 1750.00f;
    this->Explosion_Time_LV2 = 0.25f;
}


