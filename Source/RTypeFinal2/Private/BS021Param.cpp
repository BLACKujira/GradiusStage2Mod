#include "BS021Param.h"

UBS021Param::UBS021Param() {
    this->Defence = 0;
    this->Power = 0;
    this->Score = 0;
    this->BodyMesh = NULL;
    this->CoreMesh = NULL;
    this->BodyAnimBP = NULL;
    this->CoreAnimBP = NULL;
    this->DamageEffect = NULL;
    this->BulletSEffect = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->SShotSound = NULL;
    this->WaitSETime = 0.00f;
    this->StartSpeed = 0.00f;
    this->StartAngle = 0.00f;
    this->StartSearchTime = 0.00f;
    this->SearchSpeed = 0.00f;
    this->SearchInterval = 0.00f;
    this->MaxSearchAngle = 0.00f;
    this->SearchBulletParam = NULL;
    this->SShotStartTime = 0.00f;
    this->BubbleBulletParam = NULL;
    this->BShotAppearTime = 0.00f;
    this->LifeTime = 0.00f;
    this->BornLimitAngle = 0.00f;
    this->BornResetAngle = 0.00f;
    this->NeckLimitAngle = 0.00f;
    this->DeathTime = 0.00f;
}


