#include "E3309Param.h"

UE3309Param::UE3309Param() {
    this->Core_Defence = 0;
    this->Core_Score = 10000;
    this->Hangar_Up_Defence = 0;
    this->Hangar_Up_Score = 3000;
    this->Hangar_Down_Defence = 0;
    this->Hangar_Down_Score = 3000;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->Hangar_Mesh = NULL;
    this->Hangar_AnimBP = NULL;
    this->Wall_Mesh = NULL;
    this->Wall_AnimBP = NULL;
    this->SoundDamage = NULL;
    this->Core_SoundDeath = NULL;
    this->Hangar_SoundDeath = NULL;
    this->DeathTime = 1.00f;
    this->SmokeEffect = NULL;
    this->Material1 = NULL;
    this->Material2 = NULL;
}


