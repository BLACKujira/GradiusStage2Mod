#include "E240Param.h"

UE240Param::UE240Param() {
    this->Defence = 0;
    this->Score = 100;
    this->LeafThickness_A = 0.00f;
    this->LeafThickness_B = 0.00f;
    this->LeafThickness_C = 0.00f;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->DamageEff = NULL;
    this->FlowerMesh = NULL;
    this->FlowerAnimBP = NULL;
    this->FlowerEff = NULL;
    this->DebrisMesh = NULL;
    this->ExColorTex = NULL;
    this->ExDamageTex = NULL;
    this->DeathSound = NULL;
    this->CloseSound = NULL;
    this->OpenSound = NULL;
    this->DmgSoundC = NULL;
    this->DmgSoundF = NULL;
    this->DmgSoundL = NULL;
    this->ShotSound = NULL;
    this->ShootParam = NULL;
    this->DecoyEffScaleS = 0.00f;
    this->DecoyEffScaleE = 0.00f;
    this->DamageRangeS = 0.00f;
    this->DamageRangeE = 0.00f;
    this->DamageUpdateRate = 0.00f;
}


