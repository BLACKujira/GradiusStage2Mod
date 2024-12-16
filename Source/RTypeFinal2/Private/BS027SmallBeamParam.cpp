#include "BS027SmallBeamParam.h"

UBS027SmallBeamParam::UBS027SmallBeamParam() {
    this->Life = 1;
    this->Power = 100;
    this->BeamLength = 0.00f;
    this->StraightTime = 0.00f;
    this->SearchInterval = 0.00f;
    this->SearchStopTime = 0.00f;
    this->BodyMesh = NULL;
    this->HitEffect = NULL;
    this->EffectTime = 1.50f;
    this->DeathSound = NULL;
    this->DeathSoundWaitTime = 0.00f;
}


