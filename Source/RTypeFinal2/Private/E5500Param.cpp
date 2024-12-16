#include "E5500Param.h"

UE5500Param::UE5500Param() {
    this->Defence = 0;
    this->Score = 400;
    this->body = NULL;
    this->AnimBP = NULL;
    this->BlazingInterval = 0.15f;
    this->ShotDegree_Front = 45.00f;
    this->ShotDegree_Back = 75.00f;
    this->ShotDegree_Random = 2.00f;
    this->EffectFlame = NULL;
    this->EffectShot = NULL;
    this->SoundShoot = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->WaitSETime = 0.30f;
    this->ShotParam = NULL;
}


