#include "E7201Param.h"

UE7201Param::UE7201Param() {
    this->Defence = 0;
    this->Score = 800;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->BFEffect = NULL;
    this->BFEffectScrewRate = 1.00f;
    this->BFEffectPortRate = 5.00f;
    this->BFEffectPortLife = 1.00f;
    this->S7201Param = NULL;
    this->HoriMoveSpeed = 1000.00f;
    this->HoriMoveDecelTime = 1.00f;
    this->HoriMoveWaitTime = 2.00f;
    this->SinMoveAmp = 2000.00f;
    this->SinMovePeriod = 5.00f;
    this->TrpdNoShotDistance = 2000.00f;
    this->TrpdSpeedY = 2000.00f;
    this->SoundShot = NULL;
    this->SoundShotWaitSETime = 0.07f;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->DeathTime = 2.00f;
}


