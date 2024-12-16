#include "E7101Param.h"

UE7101Param::UE7101Param() {
    this->BodyDefence = 0;
    this->BodyScore = 1000;
    this->ContainerLife = 400;
    this->ContainerDefence = 0;
    this->ContainerScore = 600;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->Container_Mesh = NULL;
    this->Container_AnimBP = NULL;
    this->Cycle = 4.00f;
    this->Amplitude = 1000.00f;
    this->MoveEffect = NULL;
    this->AttackParam = NULL;
    this->OpenTime = 0.50f;
    this->CloseTime = 0.50f;
    this->BoundRate = 0.90f;
    this->WaitDamageSETime = 0.10f;
    this->WaitDeathSETime = 0.10f;
    this->WaitDeathSETime_Container = 0.10f;
    this->WaitOpenSETime = 0.10f;
    this->WaitThrowSETime = 0.10f;
    this->WaitShootSETime = 0.10f;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->SoundDeath_Container = NULL;
    this->SoundOpen = NULL;
    this->SoundThrow = NULL;
    this->SoundShoot = NULL;
}


