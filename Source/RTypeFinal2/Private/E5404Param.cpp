#include "E5404Param.h"

UE5404Param::UE5404Param() {
    this->Defence = 0;
    this->Score = 3000;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->BodyMesh_K = NULL;
    this->BodyAnim_K = NULL;
    this->BFEffect = NULL;
    this->VernierSound = NULL;
    this->LaserSignSound = NULL;
    this->LaserShootSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->VernierSoundFadeInTime = 0.50f;
    this->VernierSoundFadeOutTime = 1.00f;
    this->DeathTime = 2.00f;
    this->E5404_laserParam = NULL;
    this->LaserStopTime = 0.00f;
    this->test_StartDeathMoveTime = 0.00f;
    this->test_MoveBackSpeed = 0.00f;
    this->test_GetSmallerSpeed = 0.00f;
    this->test_RotateSpeed = 0.00f;
}


