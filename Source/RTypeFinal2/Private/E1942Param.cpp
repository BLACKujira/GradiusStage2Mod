#include "E1942Param.h"

UE1942Param::UE1942Param() {
    this->Defence = 0;
    this->Score = 400;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->ShootParam = NULL;
    this->ShootParentHuntTime = 0.10f;
    this->WaitShotSETime = 0.10f;
    this->WaitDamageSETime = 0.07f;
    this->WaitNodamageSETime = 0.07f;
    this->WaitDeathSETime = 0.10f;
    this->SoundShot = NULL;
    this->SoundDamage = NULL;
    this->SoundNoDamage = NULL;
    this->SoundDeath = NULL;
}


