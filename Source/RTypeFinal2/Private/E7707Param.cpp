#include "E7707Param.h"

UE7707Param::UE7707Param() {
    this->Defence = 0;
    this->Score = 2000;
    this->BodyMesh = NULL;
    this->BaseMesh = NULL;
    this->Base_BreakMesh = NULL;
    this->AnimBP = NULL;
    this->S7707Param = NULL;
    this->ThunderEff = NULL;
    this->ShotEff = NULL;
    this->deathEff = NULL;
    this->WaitShotSETime = 0.10f;
    this->WaitDamageSETime = 0.10f;
    this->WaitDeathSETime = 0.10f;
    this->ShotSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
}


