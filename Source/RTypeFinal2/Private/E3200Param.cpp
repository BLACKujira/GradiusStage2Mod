#include "E3200Param.h"

UE3200Param::UE3200Param() {
    this->Defence = 0;
    this->Score = 5000;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->EntrySlowTime = 0.50f;
    this->EntryRotTime = 0.50f;
    this->UpDownSpeed = 2000.00f;
    this->ExitSpeed = 4000.00f;
    this->BFEffect1 = NULL;
    this->BFEffect2 = NULL;
    this->BeamEffect = NULL;
    this->ChargeEffect = NULL;
    this->HitEffect = NULL;
    this->DamageActionStartDamageValue = 300.00f;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->DeathTime = 0.50f;
    this->BeamSound = NULL;
}


