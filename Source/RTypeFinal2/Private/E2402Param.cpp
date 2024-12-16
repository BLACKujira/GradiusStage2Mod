#include "E2402Param.h"

UE2402Param::UE2402Param() {
    this->Life = 100;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->BodyAnim = NULL;
    this->PreAttackEffect = NULL;
    this->PreEffectTime = 1.00f;
    this->ShootEffect = NULL;
    this->BFireEffect = NULL;
    this->SoundDeath = NULL;
    this->DeathSoundInterval = 0.10f;
    this->AttackParam = NULL;
    this->ShootAngleNum = 32;
    this->GroomAsset = NULL;
    this->GroomBindingAsset = NULL;
    this->DebugFlag = false;
    this->DebugFlag2 = false;
}


