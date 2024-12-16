#include "L183DataAsset.h"

UL183DataAsset::UL183DataAsset() {
    this->HP_LV1 = 150.00f;
    this->HP_LV2 = 300.00f;
    this->AP_LV1 = 150.00f;
    this->AP_LV2 = 300.00f;
    this->AP_Burst = 60.00f;
    this->AP_Explosion = 1.00f;
    this->Torpedo_Speed = 10000.00f;
    this->Torpedo_RollSpeed = 720.00f;
    this->Torpedo_SpecialSpeed = 15000.00f;
    this->Torpedo_DetectDist = 2000.00f;
    this->Torpedo_MaxMoveTime = 1.00f;
    this->Torpedo_TailLifeScale = 1.00f;
    this->Torpedo_Radius_LV1 = 125.00f;
    this->Torpedo_HalfLength_LV1 = 500.00f;
    this->Torpedo_Radius_LV2 = 125.00f;
    this->Torpedo_HalfLength_LV2 = 500.00f;
    this->Burst_Speed = 10000.00f;
    this->Burst_MaxMoveTime = 0.30f;
    this->Burst_Radius = 400.00f;
    this->Explosion_SustainTime = 1.00f;
    this->Explosion_EffectCorTime = 0.50f;
    this->Explosion_Radius = 800.00f;
    this->ShotSEBlockTime = 0.33f;
    this->BurstSEBlockTime = 0.08f;
    this->HitSEBlockTime = 0.08f;
}


