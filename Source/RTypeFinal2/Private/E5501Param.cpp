#include "E5501Param.h"

UE5501Param::UE5501Param() {
    this->Head_Defence = 0;
    this->Head_Score = 400;
    this->Head_Mesh = NULL;
    this->Head_AnimBP = NULL;
    this->Body_Defence = 0;
    this->Body_Score = 400;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->Link_Mesh = NULL;
    this->Link_AnimBP = NULL;
    this->Tail_Defence = 0;
    this->Tail_Score = 400;
    this->Tail_Mesh = NULL;
    this->Tail_AnimBP = NULL;
    this->BlazingInterval = 0.10f;
    this->StartAnimDelayTime = 0.20f;
    this->Head_ShotEffect = NULL;
    this->Body_ShotEffect = NULL;
    this->DyingEffect = NULL;
    this->SoundToge = NULL;
    this->SoundMove = NULL;
    this->SoundDamage = NULL;
    this->SoundDyingDelay = 0.50f;
    this->SoundDyingFirst = NULL;
    this->SoundDyingSecond = NULL;
    this->SoundHeadDeath = NULL;
    this->SoundHeadDeathCry = NULL;
    this->SoundPartDeath = NULL;
    this->SoundPartDeathCry = NULL;
    this->SoundShot = NULL;
    this->WaitSETime = 0.30f;
    this->ShotParam = NULL;
}


