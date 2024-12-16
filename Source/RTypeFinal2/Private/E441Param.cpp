#include "E441Param.h"

UE441Param::UE441Param() {
    this->Defence = 0;
    this->Score = 1000;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->Yarn_Mesh = NULL;
    this->Yarn_AnimBP = NULL;
    this->Base_Mesh = NULL;
    this->SwingCycle = 2.00f;
    this->LengthCycleRate = 1.00f;
    this->DamageToAngleRatio = 0.05f;
    this->SwingNarrowRate = 0.80f;
    this->SwingAngleRange = 45.00f;
    this->MaxAngleTolerance = 0.00f;
    this->SoundDeath = NULL;
}


