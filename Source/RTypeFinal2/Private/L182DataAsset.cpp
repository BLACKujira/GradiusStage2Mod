#include "L182DataAsset.h"

UL182DataAsset::UL182DataAsset() {
    this->HP_LV1 = 150.00f;
    this->HP_LV2 = 300.00f;
    this->AP_LV1 = 150.00f;
    this->AP_LV2 = 300.00f;
    this->AP_Sonic_LV1 = 60.00f;
    this->AP_Sonic_LV2 = 60.00f;
    this->AP_Attract_LV1 = 1.00f;
    this->AP_Attract_LV2 = 1.00f;
    this->Torpedo_LaunchSpeed = 2000.00f;
    this->Torpedo_LaunchSpeedTime = 0.25f;
    this->Torpedo_AcceleTime = 0.60f;
    this->Torpedo_Acceleration = 25000.00f;
    this->Torpedo_RollSpeed = 720.00f;
    this->Torpedo_TailLifeScale = 0.70f;
    this->Torpedo_Radius_LV1 = 125.00f;
    this->Torpedo_HalfLength_LV1 = 500.00f;
    this->Torpedo_Radius_LV2 = 125.00f;
    this->Torpedo_HalfLength_LV2 = 500.00f;
    this->Sonic_HalfLength = 150.00f;
    this->Sonic_PowBase = 2.00f;
    this->Sonic_Attract_Scale = 1.50f;
    this->Sonic_MinHalfHeight_LV1 = 100.00f;
    this->Sonic_MaxHalfHeight_LV1 = 800.00f;
    this->Sonic_EffectLifeTime_LV1 = 0.50f;
    this->Sonic_MinHalfHeight_LV2 = 150.00f;
    this->Sonic_MaxHalfHeight_LV2 = 1600.00f;
    this->Sonic_EffectLifeTime_LV2 = 0.70f;
}


