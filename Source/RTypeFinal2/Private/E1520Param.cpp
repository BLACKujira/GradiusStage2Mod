#include "E1520Param.h"

UE1520Param::UE1520Param() {
    this->Defence = 0;
    this->Score = 2000;
    this->DeathRate = 5.00f;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->SeparationDistance = 1000.00f;
    this->GameLineDistance = 3000.00f;
    this->AttackParam_E1501 = NULL;
    this->AttackParam_E1502 = NULL;
    this->WaitDamageSETime = 0.10f;
    this->WaitDamageSETime_Child = 0.10f;
    this->WaitDeathSETime = 0.10f;
    this->DamageSound = NULL;
    this->DamageSound_Child = NULL;
    this->DeathSound = NULL;
}


