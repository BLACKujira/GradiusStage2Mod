#include "BS006Param.h"

UBS006Param::UBS006Param() {
    this->Defence = 0;
    this->Score = 60000;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->Maku_Mesh[0] = NULL;
    this->Maku_Mesh[1] = NULL;
    this->Maku_Mesh[2] = NULL;
    this->Maku_Mesh[3] = NULL;
    this->Maku_Mesh[4] = NULL;
    this->Maku_AnimBP = NULL;
    this->PhaseTimer_1 = 40.00f;
    this->PhaseTimer_2 = 80.00f;
    this->PhaseTimer_3 = 120.00f;
    this->PhaseChangeStopTime = 2.00f;
    this->PathEntry = NULL;
    this->PathLoop = NULL;
    this->RotateSignTime = 3.00f;
    this->MakuChangeDelay = 1.00f;
    this->BS006TentacleParamAsset = NULL;
    this->TentacleDataTable = NULL;
    this->SoundDamage = NULL;
    this->SoundDamageCore = NULL;
    this->SoundDeath = NULL;
    this->SoundMakuDeath = NULL;
    this->SoundChangePhase = NULL;
    this->SoundRotate[0] = NULL;
    this->SoundRotate[1] = NULL;
    this->SoundRotate[2] = NULL;
    this->RecoverSoundInterval = 0.30f;
    this->DeathTime = 3.00f;
}


