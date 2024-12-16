#include "E5104Param.h"

UE5104Param::UE5104Param() {
    this->Defence = 0;
    this->Score = 400;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->AnimBlendTime = 0.10f;
    this->ShootParam = NULL;
    this->ShootWaitTime = 1.00f;
    this->MobParam = NULL;
    this->MobSpawnWaitTime = 0.75f;
    this->MobNoColTime = 1.00f;
    this->DamageSound = NULL;
    this->DestroySound = NULL;
    this->WaitSETime = 0.30f;
    this->ShootEffect = NULL;
}


