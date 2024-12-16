#include "E5404_laserParam.h"

UE5404_laserParam::UE5404_laserParam() {
    this->Defence = 0;
    this->Score = 500;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->DeathTime = 1.50f;
    this->DeadSmokeEffect = NULL;
    this->LaserSignalEffect = NULL;
    this->LaserEffect = NULL;
    this->HitEffect = NULL;
    this->RotSpeed = 60.00f;
    this->LaserSignSpeed = 0.00f;
    this->IsDrawDebugLine_PlayerTrace = false;
    this->HitLandCheckMode = 0;
}


