#include "E231Param.h"

UE231Param::UE231Param() {
    this->Head_Defence = 0;
    this->Head_Score = 2000;
    this->Head_Mesh = NULL;
    this->Head_AnimBP = NULL;
    this->Body_Defence = 0;
    this->Body_Score = 500;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->Tail_Mesh = NULL;
    this->Tail_AnimBP = NULL;
    this->AscendSpeed = 2000.00f;
    this->AscendRotSpeed = 30.00f;
    this->AscendInterval = 0.20f;
    this->DeathSound = NULL;
    this->DeathSound2 = NULL;
    this->DeathSound3 = NULL;
    this->DeathTime = 0.50f;
    this->BulletSpeed = 2000.00f;
    this->S231Param = NULL;
    this->BubbleEffect = NULL;
    this->NormalSound = NULL;
    this->DamageSound = NULL;
    this->ToukaSound = NULL;
}


