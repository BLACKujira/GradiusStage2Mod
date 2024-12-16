#include "E2101Param.h"

UE2101Param::UE2101Param() {
    this->Head_Defence = 0;
    this->Head_Score = 2000;
    this->Head_Mesh = NULL;
    this->Head_AnimBP = NULL;
    this->Body_Life = 100;
    this->Body_Defence = 0;
    this->Body_Score = 0;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->BodyNum = 15;
    this->Tail_Defence = 0;
    this->Tail_Score = 2000;
    this->Tail_Mesh = NULL;
    this->Tail_AnimBP = NULL;
    this->S000Param = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->Death2Sound = NULL;
    this->DeathTime = 0.50f;
    this->SandSmokeEffect = NULL;
    this->ShotEffect = NULL;
}


