#include "E2102Param.h"

UE2102Param::UE2102Param() {
    this->Defence = 0;
    this->Score = 500;
    this->BodyMesh = NULL;
    this->CoreMesh = NULL;
    this->BodyAnimBP = NULL;
    this->CoreAnimBP = NULL;
    this->InitMoveSpeed = 0.00f;
    this->SearchStartTime = 0.00f;
    this->ExitDir = 0.00f;
    this->ExitRotSpeed = 0.00f;
    this->ExitMoveSpeed = 0.00f;
    this->OmenStartTime = 0.00f;
    this->OmenTime = 0.00f;
    this->ShotSpeed = 0.00f;
    this->S2102Param = NULL;
    this->ExplosionSound = NULL;
    this->DeathSound = NULL;
}


