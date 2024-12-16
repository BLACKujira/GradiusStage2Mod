#include "E7520Param.h"

UE7520Param::UE7520Param() {
    this->BodyScore = 5000;
    this->ForceScore = 1000;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->ForceMesh = NULL;
    this->ForceAnimBP = NULL;
    this->VerticalMoveOmega = 1.00f;
    this->HorizontalDelay = 0.50f;
    this->TurnTime = 0.50f;
    this->TurnLimitTime = 1.00f;
    this->S7520Param = NULL;
    this->ShootWaitTime = 3.00f;
    this->S7520LaserParam = NULL;
    this->S7520HParam = NULL;
    this->ExitTime = 15.00f;
    this->ExitPathR = NULL;
    this->ExitPathL = NULL;
    this->RollSpeed = 60.00f;
    this->RollWaitTime = 1.00f;
    this->ScrollSpeed = 10000.00f;
    this->ScrollAccTime = 3.00f;
    this->BFEffect = NULL;
    this->ShotBulletEffect = NULL;
    this->ShotLaserEffect = NULL;
    this->HChargeEffect = NULL;
    this->HShotEffect = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->ShootBSound = NULL;
    this->ShootBSoundLimit = 0.50f;
    this->ShootHSound = NULL;
    this->ShootLSound = NULL;
    this->SpeedUpSound = NULL;
    this->SpeedDownSound = NULL;
    this->DeathTime = 1.00f;
    this->GhostMesh1 = NULL;
    this->GhostMesh2 = NULL;
    this->GhostLifeTime = 0.25f;
    this->GhostInterval = 0.10f;
}


