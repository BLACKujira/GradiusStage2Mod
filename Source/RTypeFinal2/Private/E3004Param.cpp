#include "E3004Param.h"

UE3004Param::UE3004Param() {
    this->Defence = 0;
    this->Score = 100;
    this->DeathTimer = 0.00f;
    this->BodyMesh = NULL;
    this->BodyAnim = NULL;
    this->SoundDamage = NULL;
    this->WaitDamageSETime = 0.00f;
    this->SoundDeath = NULL;
    this->WaitDeathSETime = 0.10f;
    this->ExploSignTime = 0.00f;
    this->AttackParam = NULL;
    this->DebugFlag = false;
    this->DebugFlag2 = false;
}


