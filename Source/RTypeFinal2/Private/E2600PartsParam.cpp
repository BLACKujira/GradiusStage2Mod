#include "E2600PartsParam.h"

UE2600PartsParam::UE2600PartsParam() {
    this->Defence = 0;
    this->Score = 0;
    this->CollisionArray.AddDefaulted(4);
    this->BrokenCollisionArray.AddDefaulted(4);
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->BrokenMesh = NULL;
    this->SoundDamage = NULL;
    this->SoundDamageWaitTime = 0.00f;
    this->SoundDeath = NULL;
    this->SoundDeathWaitTime = 0.00f;
}


