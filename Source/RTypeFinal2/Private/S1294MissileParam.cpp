#include "S1294MissileParam.h"

US1294MissileParam::US1294MissileParam() {
    this->LifeTime = 10.00f;
    this->Life = 1000;
    this->Defence = 0;
    this->Power = 300;
    this->Score = 0;
    this->BodyMesh = NULL;
    this->FireEffect = NULL;
    this->MoveEffect = NULL;
    this->HitEffect = NULL;
    this->MoveSpeedMax = 5000.00f;
    this->StraightSpeed = 3000.00f;
    this->StraightAccel = 5000.00f;
    this->StraightTime = 3.00f;
    this->SearchLimitAngle = 45.00f;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
}


