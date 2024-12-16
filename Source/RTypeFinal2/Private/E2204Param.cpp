#include "E2204Param.h"

UE2204Param::UE2204Param() {
    this->Defence = 0;
    this->Score = 200;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->DegSpeed = 0.00f;
    this->SearchRad = 0.00f;
    this->ExplosionRad = 0.00f;
    this->EffRad = 1500.00f;
    this->ExpWaitTime = 0.05f;
    this->ExplosionContTime = 0.00f;
    this->ExplosionAttackTime = 0.00f;
    this->BubbleEff = NULL;
    this->SoundSpanOmen = 0.10f;
    this->SoundSpanExp = 0.10f;
    this->DamageSound = NULL;
    this->OmenSound = NULL;
    this->ExplosionSound = NULL;
    this->BlastSound = NULL;
    this->DeathSound = NULL;
}


