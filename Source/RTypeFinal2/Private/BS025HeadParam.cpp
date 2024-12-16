#include "BS025HeadParam.h"

UBS025HeadParam::UBS025HeadParam() {
    this->Defence = 0;
    this->Score = 1000;
    this->DamageRate = 10.00f;
    this->TotalBattleTime = 180.00f;
    this->PartHalfNum = 5;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->Material = NULL;
    this->DyingMaterial = NULL;
    this->BS025SecParam = NULL;
    this->BS025TailParam = NULL;
    this->MoveSpeed = 3000.00f;
    this->MoveEndWaitTime = 1.00f;
    this->MoveCameraShake = NULL;
    this->LineLimitLength = 5000.00f;
    this->SearchInterval = 0.10f;
    this->ShotLifeTime = 5.00f;
    this->ShotNoHitTime = 1.00f;
    this->OmenTime = 1.00f;
    this->MoveEffect = NULL;
    this->DeathEffect = NULL;
    this->SoundMove = NULL;
}


