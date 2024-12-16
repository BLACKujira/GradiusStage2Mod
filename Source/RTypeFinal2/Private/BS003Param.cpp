#include "BS003Param.h"

UBS003Param::UBS003Param() {
    this->Defence = 0;
    this->Score = 35000;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->MoveSound = NULL;
    this->MoveEndSound = NULL;
    this->AttackSound = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->DeathTime = 1.00f;
    this->DeathCamaraShake = NULL;
    this->BeamSignTime = 1.00f;
    this->AttackWaitTime = 1.00f;
    this->AttackInterval = 0.10f;
    this->AttackRandomRot = 5;
    this->S000Param = NULL;
    this->AttackEffect = NULL;
    this->GraySmokeEffect = NULL;
    this->BlackSmokeEffect = NULL;
}


