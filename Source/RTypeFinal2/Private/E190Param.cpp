#include "E190Param.h"

UE190Param::UE190Param() {
    this->BodyDefence = 0;
    this->BodyScore = 0;
    this->ContainerLife = 0;
    this->ContainerDefence = 0;
    this->ContainerScore = 0;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->Container_Mesh = NULL;
    this->Container_AnimBP = NULL;
    this->Cycle = 0.00f;
    this->Amplitude = 0.00f;
    this->AttackParam = NULL;
    this->MoveEffect = NULL;
    this->OpenTime = 0.00f;
    this->CloseTime = 0.00f;
    this->BoundRate = 0.00f;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->SoundOpen = NULL;
    this->SoundShoot = NULL;
}


