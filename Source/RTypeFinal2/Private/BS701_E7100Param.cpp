#include "BS701_E7100Param.h"

UBS701_E7100Param::UBS701_E7100Param() {
    this->Life = 1;
    this->Life_Force = 1;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->BodyMesh_Force = NULL;
    this->AnimBP_Force = NULL;
    this->AppTime = 0.00f;
    this->AppY = 5000.00f;
    this->WaitTime = 0.50f;
    this->JetEff = NULL;
    this->HitEff = NULL;
    this->AppEff = NULL;
    this->WaitDeathSETime = 0.10f;
    this->WaitMoveSETime = 0.10f;
    this->WaitDamageSETime = 0.10f;
    this->MoveSound = NULL;
    this->DeathSound = NULL;
    this->DamageSound = NULL;
}


