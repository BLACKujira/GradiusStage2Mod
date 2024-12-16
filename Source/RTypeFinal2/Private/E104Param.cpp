#include "E104Param.h"

UE104Param::UE104Param() {
    this->Defence = 0;
    this->Score = 100;
    this->DamageForAct = 1000;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->DeathEffect = NULL;
    this->DeathSound = NULL;
    this->ShotSound = NULL;
    this->MoveEffect0 = NULL;
    this->MoveEffect1 = NULL;
    this->DriftSpeed = 2000.00f;
    this->BackwardDistanceToTurn = 2000.00f;
    this->ShootParam = NULL;
    this->SliceMesh = NULL;
    this->SliceCapMaterial = NULL;
    this->SliceMoveSpeed = 0.00f;
    this->SliceRotateSpeed = 0.00f;
    this->SliceExplosionWaitTime = 0.00f;
    this->SliceExplosionDelayTime = 0.00f;
    this->SliceDistance = 0.00f;
}


