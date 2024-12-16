#include "E7702Param.h"

UE7702Param::UE7702Param() {
    this->Defence = 0;
    this->Score = 1000;
    this->WingCol_RateMax = 1.90f;
    this->ColChangeWaitTime = 0.50f;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->MoveSpeed = 0.00f;
    this->ShotRotTime = 0.00f;
    this->OmenTime = 0.00f;
    this->WaitTime = 0.00f;
    this->S7702Param = NULL;
    this->ShotEffect = NULL;
    this->BFEffect = NULL;
    this->BFEffect_Small = NULL;
    this->WaitShotSETime = 0.10f;
    this->WaitDamageSETime = 0.10f;
    this->WaitDeathSETime = 0.10f;
    this->SoundShot = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
}


