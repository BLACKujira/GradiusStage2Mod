#include "BS707TractorParam.h"

UBS707TractorParam::UBS707TractorParam() {
    this->Life = 0.00f;
    this->Defence = 0;
    this->Score = 5000;
    this->MeshBody = NULL;
    this->AnimBPBody = NULL;
    this->MeshBodyDeath = NULL;
    this->EffectBeam = NULL;
    this->EffectDeathSmoke = NULL;
    this->SoundBeam = NULL;
    this->SoundDamage = NULL;
    this->WaitSETime_Damage = 0.07f;
    this->SoundDeath = NULL;
    this->WaitSETime_Death = 0.07f;
    this->TractorMoveLimitXL = 117000.00f;
    this->TractorMoveLimitXR = 127000.00f;
    this->TractorMoveSpeed = 8000.00f;
    this->TractorBeamInterval = 1.00f;
    this->TractorBeamEndingTime = 1.00f;
    this->TractorBeamFadeOutTime = 1.00f;
    this->TractorBeamFieldWidth = 1800.00f;
    this->TractorBeamSearchWidth = 1000.00f;
    this->TractorDisconnectMovingTimeZ = 0.70f;
    this->TractorDisconnectMovingTimeY = 0.30f;
    this->BmSignT = -1.00f;
    this->BmSpd = -1.00f;
    this->BmKeepT = -1.00f;
    this->BmPower = -1.00f;
    this->DeathModelTime = 0.30f;
}


