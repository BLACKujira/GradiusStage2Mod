#include "E2702CannonParam.h"

UE2702CannonParam::UE2702CannonParam() {
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->CannonSlideSpeed = 0.00f;
    this->CannonSlideDelay = 0.00f;
    this->BeamSound = NULL;
    this->DeathSound = NULL;
    this->DeathSoundWaitTime = 0.00f;
    this->DamageSound = NULL;
    this->DamageSoundWaitTime = 0.00f;
    this->ShootParam = NULL;
}


