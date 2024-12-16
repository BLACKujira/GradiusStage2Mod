#include "E3500Param.h"

UE3500Param::UE3500Param() {
    this->Life = 100;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->RegistInterval = 0.26f;
    this->RegistYSpace = 100.00f;
    this->MoveSpeed = 5500.00f;
    this->FallSpeed = 5000.00f;
    this->RotSpeed = 0.00f;
    this->RotateSlerpTime = 0.10f;
    this->ForwardCheckLength = 1200.00f;
    this->DownCheckLength = 3000.00f;
    this->DispOutXLine = 13000.00f;
    this->DispOutZLine = 7000.00f;
    this->SpreadDelay = 0.50f;
    this->AttackParam = NULL;
    this->ShootLength = 2000.00f;
    this->ShootAngleNum = 32;
    this->SignTime = 0.50f;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->ShootEffect = NULL;
    this->SignEffect = NULL;
}


