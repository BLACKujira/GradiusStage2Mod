#include "L099DataAsset.h"

UL099DataAsset::UL099DataAsset() {
    this->AP = 240.00f;
    this->AP2 = 480.00f;
    this->APFocus = 420.00f;
    this->APFocus2 = 660.00f;
    this->RadiusE = 200.00f;
    this->RadiusE2 = 200.00f;
    this->RadiusL = 50.00f;
    this->RadiusL2 = 50.00f;
    this->RadiusFocus = 200.00f;
    this->RadiusFocus2 = 300.00f;
    this->ShotInterval = 0.50f;
    this->LifeTime = 1.00f;
    this->LifeTime2 = 1.00f;
    this->StartTime = 0.25f;
    this->StartTime2 = 0.25f;
    this->EndTime = 0.25f;
    this->EndTime2 = 0.25f;
    this->ExtendTime[0] = 0.25f;
    this->ExtendTime[1] = 0.25f;
    this->EffectDeathTime = 1.00f;
    this->LengthMin = 0.00f;
    this->LengthMax = 20000.00f;
    this->GrowSpeed = 24000.00f;
    this->RotSpeedRate = 0.02f;
    this->AngleMax = 30.00f;
    this->AngleMin = -30.00f;
    this->HPB = 200.00f;
    this->APB = 200.00f;
    this->RadiusB = 100.00f;
    this->LenB = 200.00f;
    this->SpeedB = 18000.00f;
}


