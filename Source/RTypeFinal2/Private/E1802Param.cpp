#include "E1802Param.h"

UE1802Param::UE1802Param() {
    this->BodyScore = 0;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->SpawnPartsInterval = 0.00f;
    this->OpenAnimationTime = 1.50f;
    this->CloseAnimationTime = 1.50f;
    this->AppearDeccerationTime = 0.00f;
    this->AppearVelocity = 0.00f;
    this->ExitAcccerationTime = 0.00f;
    this->ExitVelocity = 0.00f;
    this->VernierEff = NULL;
    this->DamageSound = NULL;
    this->DamageSoundWaitTime = 0.00f;
    this->DeathSound = NULL;
    this->DeathSoundWaitTime = 0.00f;
    this->PartsAppearSound = NULL;
    this->PartsAppearSoundWaitTime = 0.10f;
    this->PartsAppearSoundDelay = 0.00f;
}


