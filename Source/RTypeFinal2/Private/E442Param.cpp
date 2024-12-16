#include "E442Param.h"

UE442Param::UE442Param() {
    this->Defence = 0;
    this->Score = 700;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->openPlayRate = 1.00f;
    this->AttackEffect = NULL;
    this->DeathEffect = NULL;
    this->AttackParam = NULL;
    this->ShootVelocity = 5000.00f;
    this->ShootVelocityRange = 1000.00f;
    this->ShootAngleRange = 15.00f;
    this->ShootGravity = 3000.00f;
    this->SoundDeath = NULL;
    this->SoundOpen = NULL;
    this->SoundShot = NULL;
}


