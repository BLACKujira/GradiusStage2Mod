#include "BS002PlantParam.h"

UBS002PlantParam::UBS002PlantParam() {
    this->Seed_Mesh = NULL;
    this->Sprout_Mesh = NULL;
    this->Seed_AnimBP = NULL;
    this->Sprout_AnimBP = NULL;
    this->DeathTime = 2.00f;
    this->SeedExpandTiming = 0.20f;
    this->SeedExpandAnimRate = 1.00f;
    this->SproutAnimationTime = 2.00f;
    this->SproutCollisionChangeTime = 1.00f;
    this->SoundDeath = NULL;
    this->SoundGrow = NULL;
}


