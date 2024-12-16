#include "L041DataAsset.h"

UL041DataAsset::UL041DataAsset() {
    this->Hp = 100.00f;
    this->HP2 = 100.00f;
    this->AP = 100.00f;
    this->AP2 = 250.00f;
    this->AP_Tail = 900.00f;
    this->AP2_Tail = 1200.00f;
    this->LifeTime = 6.00f;
    this->Shoot_Speed = 10800.00f;
    this->Land_Speed = 48000.00f;
    this->Fly_Disappear_Speed = 51000.00f;
    this->DisableTime = 0.50f;
    this->RapidTime = 0.17f;
    this->ShotOffset_X = 0.00f;
    this->ShotOffset_Z = 200.00f;
    this->ShootAngle = 67.50f;
    this->ModelLength_Lv1 = 3200.00f;
    this->LimitLength_Lv1 = 3200.00f;
    this->ModelLength_Lv2 = 6400.00f;
    this->LimitLength_Lv2 = 6400.00f;
    this->TailLifeTime_Lv1 = 0.50f;
    this->TailLifeTime_Lv2 = 0.70f;
    this->FlyToDispTime_Lv1 = 0.50f;
    this->FlyToDispTime_Lv2 = 0.70f;
    this->EllipseNum_Lv1 = 6;
    this->EllipseNum_Lv2 = 8;
    this->EllipseCorTime_Lv1 = 0.20f;
    this->EllipseCorTime_Lv2 = 0.20f;
    this->HitRadius_Lv1 = 200.00f;
    this->HitRadius_Lv2 = 200.00f;
    this->TailSearchGap_Fly_Lv1 = 0.50f;
    this->TailSearchGap_Fly_Lv2 = 0.50f;
    this->TailSearchGap_Bound_Lv1 = 0.70f;
    this->TailSearchGap_Bound_Lv2 = 0.70f;
    this->TailSearchUnitLength_Lv1 = 400.00f;
    this->TailSearchUnitLength_Lv2 = 400.00f;
}


