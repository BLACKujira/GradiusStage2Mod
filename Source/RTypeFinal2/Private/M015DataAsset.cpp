#include "M015DataAsset.h"

UM015DataAsset::UM015DataAsset() {
    this->BodyRadius = 250.00f;
    this->AttackRadius = 1000.00f;
    this->AP = 100.00f;
    this->AP2 = 100.00f;
    this->APB = 100.00f;
    this->APB2 = 100.00f;
    this->MoveSpeed0 = 0.00f;
    this->Acc = 980.00f;
    this->MoveSpeedMax = 18000.00f;
    this->ShotNum1 = 2;
    this->ShotNum2 = 4;
    this->ShotInterval = 0.25f;
    this->SelfBlastTime = 1.00f;
    this->KeepBlastTime = 0.08f;
    this->PostBlastTime = 0.10f;
    this->Scale0 = 0.25f;
    this->ScaleT = 0.10f;
}


