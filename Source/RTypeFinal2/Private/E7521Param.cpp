#include "E7521Param.h"

UE7521Param::UE7521Param() {
    this->BodyScore = 2000;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->VerticalMoveOmega = 1.00f;
    this->HorizontalMoveOmega = 1.00f;
    this->TurnTime = 0.50f;
    this->TurnLimitTime = 1.00f;
    this->S7521Param = NULL;
    this->ShootWaitTime = 3.00f;
    this->ExitTime = 15.00f;
    this->ExitPathR = NULL;
    this->ExitPathL = NULL;
    this->RollSpeed = 60.00f;
    this->RollWaitTime = 1.00f;
    this->BFEffect = NULL;
    this->ShotBulletEffect = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->ShootSound = NULL;
    this->ShootBSoundLimit = 0.50f;
    this->SpeedUpSound = NULL;
    this->SpeedDownSound = NULL;
    this->DeathTime = 1.00f;
    this->GhostMesh = NULL;
    this->GhostLifeTime = 0.25f;
    this->GhostInterval = 0.10f;
}


