#include "E1815Param.h"

UE1815Param::UE1815Param() {
    this->Head_Mesh = NULL;
    this->Head_AnimBP = NULL;
    this->Body_Defence = 0;
    this->Body_Score = 300;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->Core_Defence = 0;
    this->Core_Score = 2000;
    this->Core_Mesh = NULL;
    this->Core_AnimBP = NULL;
    this->Tail_Mesh = NULL;
    this->Tail_AnimBP = NULL;
    this->CallSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->CoreDeathSound = NULL;
    this->Death2Sound = NULL;
    this->SplitTime = 1.50f;
    this->DeathTime = 0.50f;
}


