#include "E005MissileParam.h"

UE005MissileParam::UE005MissileParam() {
    this->Life = 100;
    this->Defence = 0;
    this->Power = 100;
    this->Score = 0;
    this->LifeTime = 0.00f;
    this->MoveSpeed = 5000.00f;
    this->MoveAngleRandom = 0.00f;
    this->MoveSpeedRandom = 0.00f;
    this->MoveEffect = NULL;
    this->BodyMesh = NULL;
    this->HitEffect = NULL;
    this->IsnReflectionCaptured = true;
    this->SoundDeath = NULL;
}


