#include "E7501Param.h"

UE7501Param::UE7501Param() {
    this->Defence = 0;
    this->Body_Score = 4000;
    this->Head_Score = 100;
    this->UseMesh = 0;
    this->BodyMesh = NULL;
    this->BodyMeshNA = NULL;
    this->BodyAnimBP = NULL;
    this->HeadMesh = NULL;
    this->HeadMeshNA = NULL;
    this->HeadAnimBP = NULL;
    this->Body_KMesh = NULL;
    this->Body_KMeshNA = NULL;
    this->DropAcc = 3000.00f;
    this->MoveSpeed = 2000.00f;
    this->MoveAnimRate = 1.00f;
    this->RotSpeed = 60.00f;
    this->ShootInitSpeed = 6000.00f;
    this->ShootGravity = 4000.00f;
    this->ShootAngle = 10.00f;
    this->ShakeAngle = 3.00f;
    this->ShootTime = 2.00f;
    this->S7501Param = NULL;
    this->BleedEffect1 = NULL;
    this->BleedEffect2 = NULL;
    this->BleedEffect1NA = NULL;
    this->BleedEffect2NA = NULL;
    this->ShootEffect = NULL;
    this->DamageSound = NULL;
    this->DeathSound1 = NULL;
    this->DeathSound2 = NULL;
    this->HeadDeathSound = NULL;
    this->ShotSound = NULL;
    this->ShotSoundLimit = 0.10f;
    this->LandSound = NULL;
    this->WalkSound = NULL;
    this->WalkSoundLimit = 0.10f;
    this->RotateWalkSoundInterval = 0.35f;
    this->DeathTime = 0.50f;
    this->E7501_meatParam = NULL;
}


