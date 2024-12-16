#include "E3702Param.h"

UE3702Param::UE3702Param() {
    this->Defence = 0;
    this->Score = 200;
    this->Mushroom_Score = 100;
    this->Body_Mesh = NULL;
    this->Gun_Mesh = NULL;
    this->Gun_DMesh = NULL;
    this->Core_Mesh = NULL;
    this->Core_DMesh = NULL;
    this->Gun_AnimBP = NULL;
    this->Core_AnimBP = NULL;
    this->Radius = 45.00f;
    this->RotSpeed.AddDefaulted(17);
    this->DeathDelay = 0.25f;
    this->SignTime = 0.50f;
    this->AttackParam = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->MushroomDamageSound = NULL;
    this->MushroomDeathSound = NULL;
    this->DeathTime = 0.50f;
    this->SignEffect = NULL;
}


