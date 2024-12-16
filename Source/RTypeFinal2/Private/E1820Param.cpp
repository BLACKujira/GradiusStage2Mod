#include "E1820Param.h"

UE1820Param::UE1820Param() {
    this->Body_Defence = 0;
    this->Body_Score = 1000;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->ShotSound = NULL;
    this->ShotSoundWaitTime = 0.00f;
    this->RotTime = 0.00f;
    this->DeathTime = 1.30f;
    this->WaitTime = 0.00f;
    this->ShotEffect = NULL;
    this->SignEffect = NULL;
    this->LaserParam = NULL;
    this->HobberEffect = NULL;
    this->FirstAngle = 0.00f;
}


