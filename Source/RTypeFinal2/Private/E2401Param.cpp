#include "E2401Param.h"

UE2401Param::UE2401Param() {
    this->Life = 1;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->BodyAnimFly = NULL;
    this->PreAttackEffect = NULL;
    this->AttackEffect = NULL;
    this->AttackParam = NULL;
    this->ShootAngleNum = 0;
    this->SoundDeath = NULL;
    this->DeathSoundInterval = 0.00f;
    this->GroomAsset = NULL;
    this->GroomBindingAsset = NULL;
    this->DebugFlag = false;
}


