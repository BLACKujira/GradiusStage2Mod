#include "BS703Param.h"

UBS703Param::UBS703Param() {
    this->Score = 0;
    this->BattleTime = 0.00f;
    this->DeathTime = 0.00f;
    this->AttackStartTime = 0.00f;
    this->RetreatTime = 0.00f;
    this->SoundUnion = NULL;
    this->SoundSeparation = NULL;
    this->SoundBeam = NULL;
    this->SoundBreake = NULL;
    this->WaitUnionSETime = 0.00f;
    this->WaitSeparationSETime = 0.00f;
    this->WaitBeamSETime = 0.00f;
    this->WaitBreakeSETime = 0.00f;
    this->PartAParam = NULL;
    this->PartBParam = NULL;
    this->PartCParam = NULL;
}


