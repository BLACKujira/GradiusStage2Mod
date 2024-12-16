#include "E1946BodyParam.h"

UE1946BodyParam::UE1946BodyParam() {
    this->Defence = 0;
    this->Score = 6000;
    this->Mesh = NULL;
    this->AnimBP = NULL;
    this->ShotStartTime = 0.50f;
    this->OmenTime = 0.50f;
    this->AttackParam = NULL;
    this->JetStretchTime = 1.00f;
    this->JetMaxContTime = 1.00f;
    this->JetShrinkTime = 1.00f;
    this->JetMinRadius = 200.00f;
    this->JetMinHalfHeight = 500.00f;
    this->JetEff = NULL;
    this->WaitDeathSETime = 0.30f;
    this->WaitShotSETime = 0.00f;
    this->JetSound = NULL;
    this->ShotSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
}


