#include "E3615Param.h"

UE3615Param::UE3615Param() {
    this->Defence = 0;
    this->BrokenScore = 600;
    this->DeathScore = 600;
    this->BodyMesh = NULL;
    this->BrokenMesh = NULL;
    this->AnimBP = NULL;
    this->DeathEffect = NULL;
    this->VernierEffect = NULL;
    this->MissEffect = NULL;
    this->DripEffectParam = NULL;
    this->DamageSound = NULL;
    this->BreakSound = NULL;
    this->DeathSound = NULL;
    this->VernierSound = NULL;
    this->VernierMaxLength = 3000.00f;
    this->VernierStartWaitTime = 0.50f;
    this->VernierStartTime = 0.50f;
    this->VernierEndTime = 0.50f;
    this->VernierEndWaitTime = 0.50f;
}


