#include "BS022_Fighter_ShotParam.h"

UBS022_Fighter_ShotParam::UBS022_Fighter_ShotParam() {
    this->Life = 100;
    this->Defence = 0;
    this->Power = 100;
    this->Score = 0;
    this->LifeTime = 60.00f;
    this->OutlineRadius = 0.00f;
    this->BodyEffect = NULL;
    this->HitEffect = NULL;
    this->IsnReflectionCaptured = true;
    this->SoundDeath = NULL;
    this->LineMesh = NULL;
}


