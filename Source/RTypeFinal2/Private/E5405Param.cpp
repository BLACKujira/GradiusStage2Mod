#include "E5405Param.h"

UE5405Param::UE5405Param() {
    this->Defence = 0;
    this->Score = 3000;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->BodyMesh_K = NULL;
    this->BodyMesh_K2 = NULL;
    this->BodyAnimBp_K2 = NULL;
    this->VernierSmoke = NULL;
    this->VernierSmoke2 = NULL;
    this->BodySmoke = NULL;
    this->VernierFire = NULL;
    this->VernierHit = NULL;
    this->VernierFireSound = NULL;
    this->HatchOpenStartSound = NULL;
    this->HatchOpenFinishSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->VernierSoundFadeInTime = 0.50f;
    this->VernierSoundFadeOutTime = 1.00f;
    this->DeathTime = 4.50f;
    this->ForwardRotAngle = 0.00f;
    this->ReverseRotAngle = 0.00f;
    this->MaxRotSpeed = 0.00f;
    this->VernierFullThrottleLength = 0.00f;
    this->VernierFullThrottleTime = 0.00f;
    this->VernierDownThrottleTime = 0.00f;
    this->VernierStopTime = 0.00f;
    this->VernierInterval = 0.00f;
    this->HatchOpenTime = 0.00f;
    this->VernierFireDefaultScale = 1.00f;
    this->BodySmokeEffect_SetLocationMode = 0;
}


