#include "E5701Param.h"

UE5701Param::UE5701Param() {
    this->Defence = 0;
    this->Score = 1000;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->SearchRadiusX = 30.00f;
    this->SearchRadiusZ = 100.00f;
    this->DamageStopTime = 0.50f;
    this->OmenWaitTime = 0.50f;
    this->AppearSEWaitTime = 0.05f;
    this->DigOutSEWaitTime = 0.10f;
    this->DigInSEWaitTime = 0.10f;
    this->LandHeight = 5000.00f;
    this->EffectOmenWait = NULL;
    this->EffectAppear = NULL;
    this->SoundDigOut = NULL;
    this->SoundAppear = NULL;
    this->SoundDigIn = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->WaitSETime = 0.30f;
}


