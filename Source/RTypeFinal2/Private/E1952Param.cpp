#include "E1952Param.h"

UE1952Param::UE1952Param() {
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
    this->SoundDamage = NULL;
    this->WaitDamageSETime = 0.07f;
    this->SoundDeath = NULL;
    this->WaitDeathSETime = 0.07f;
    this->SoundOpen = NULL;
    this->SoundShot = NULL;
}


