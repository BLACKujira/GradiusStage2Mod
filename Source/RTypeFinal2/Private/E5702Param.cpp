#include "E5702Param.h"

UE5702Param::UE5702Param() {
    this->Defence_Body = 0;
    this->Defence_Stomach = 0;
    this->Score_Body = 500;
    this->Score_Stomach = 3000;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->StomachMesh = NULL;
    this->StomachAnimBP = NULL;
    this->StomachMoveSpeed = 20.00f;
    this->StomachRotateSpeed = 90.00f;
    this->BabySpawnMoveDistance.AddDefaulted(3);
    this->BabySearchOffset.AddDefaulted(8);
    this->StomachMaxUnitDeg = 10.00f;
    this->BabySpawnSoundMinInterval = 0.20f;
    this->SoundBabyAppear = NULL;
    this->SoundDamage = NULL;
    this->SoundBodyDeath = NULL;
    this->SoundStomachDeath = NULL;
    this->BabyParam = NULL;
}


