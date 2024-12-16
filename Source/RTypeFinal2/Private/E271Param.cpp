#include "E271Param.h"

UE271Param::UE271Param() {
    this->Defence = 0;
    this->Score = 1000;
    this->Body_Mesh = NULL;
    this->Body_Mesh_LDeath = NULL;
    this->Body_Mesh_RDeath = NULL;
    this->Body_AnimBP = NULL;
    this->S271Param = NULL;
    this->ShootSpeed = 3000.00f;
    this->Gravity = 1500.00f;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->ShootSound = NULL;
    this->HalfSound = NULL;
    this->DeathTime = 0.50f;
    this->Half_Material = NULL;
    this->DamageEffect = NULL;
    this->ShootEffect = NULL;
}


