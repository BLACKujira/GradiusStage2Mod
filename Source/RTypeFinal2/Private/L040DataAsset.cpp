#include "L040DataAsset.h"

UL040DataAsset::UL040DataAsset() {
    this->AP_Stop = 900.00f;
    this->AP2_Stop = 1200.00f;
    this->AP_Roll = 1200.00f;
    this->AP2_Roll = 1800.00f;
    this->Range_Lv1 = 2250.00f;
    this->Range_Lv2 = 4500.00f;
    this->HitRadius_Lv1 = 300.00f;
    this->HitRadius_Lv2 = 300.00f;
    this->LandHitRadius_Lv1 = 200.00f;
    this->LandHitRadius_Lv2 = 200.00f;
    this->ExpandTime = 0.10f;
    this->ShrinkTime = 0.10f;
    this->KeepTime = 0.50f;
    this->RollKeepTime = 0.17f;
    this->RollStopTime = 0.17f;
    this->RollSpeed = 1800.00f;
    this->BodyOffset_X = 0.00f;
    this->BodyOffset_Z = 0.00f;
    this->HitEffectInterval = 0.13f;
}


