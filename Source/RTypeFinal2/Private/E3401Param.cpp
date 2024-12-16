#include "E3401Param.h"

UE3401Param::UE3401Param() {
    this->Defence = 0;
    this->Score = 500;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->DeathSound = NULL;
    this->DeathTime = 2.00f;
    this->MoveSpeed = 1000.00f;
    this->TargetNearDistance = 15.00f;
    this->AttackAnimTime = 0.20f;
    this->S3401MissileParam = NULL;
    this->S3401BulletParam = NULL;
}


