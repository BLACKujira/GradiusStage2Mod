#include "E2707LaserParam.h"

UE2707LaserParam::UE2707LaserParam() {
    this->Power = 100;
    this->BodyMesh = NULL;
    this->BodyMesh2 = NULL;
    this->HeadMesh = NULL;
    this->JointMesh = NULL;
    this->TopEffect = NULL;
    this->DeathEffect = NULL;
    this->TurnDelay = 1.00f;
    this->LaserTaleSpeedRatio = 0.50f;
    this->LaserTaleLength = 500.00f;
    this->LaserTaleLengthMin = 10.00f;
    this->LaserCornerOffsetX = 20.00f;
    this->LaserCornerOffsetZ = 60.00f;
    this->LaserJointOffsetX = 20.00f;
    this->LaserJointOffsetZ = 60.00f;
    this->LaserJointScale = 0.00f;
}


