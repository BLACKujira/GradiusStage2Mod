#include "E233Param.h"

UE233Param::UE233Param() {
    this->Head_Defence = 0;
    this->Head_Score = 400;
    this->Head_Mesh = NULL;
    this->Head_AnimBP = NULL;
    this->Body_Defence = 0;
    this->Body_Score = 100;
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
    this->BubbleEffect = NULL;
}


