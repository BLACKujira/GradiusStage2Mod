#include "E2001Param.h"

UE2001Param::UE2001Param() {
    this->Defence = 0;
    this->Score = 1000;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->ShootEffect = NULL;
    this->DamageSound = NULL;
    this->WaitTimeDamageSE = 0.00f;
    this->NoDamageSound = NULL;
    this->WaitTimeNodamageSE = 0.00f;
    this->DeathSound = NULL;
    this->WaitTimeDeathSE = 0.00f;
    this->Amplitude = 1000.00f;
    this->StopTime = 1.00f;
    this->CAParam = NULL;
    this->CounterWaitTime = 1.00f;
    this->CASpeed = 1000.00f;
    this->Counter_CS = 1;
    this->Counter_NS = 1;
    this->Counter_S2001 = 1;
    this->Damage_CS = 1;
    this->Damage_NS = 1;
    this->Damage_S2001 = 1;
}


