#include "E1294CannonParam.h"

UE1294CannonParam::UE1294CannonParam() {
    this->CannonChargeTime = 0.00f;
    this->CannonStretchTime = 0.00f;
    this->CannonKeepTime = 0.00f;
    this->CannonShrinkTime = 0.00f;
    this->CannonChargeEffect = NULL;
    this->CannonBeamEffect = NULL;
    this->CannonEnableRadius = 0.00f;
    this->SoundBeamPlay2dFlag = false;
    this->SoundBeam = NULL;
    this->SoundBeamAttenuation = NULL;
}


