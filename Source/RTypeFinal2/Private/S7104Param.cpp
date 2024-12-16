#include "S7104Param.h"

US7104Param::US7104Param() {
    this->Life = 1;
    this->Defence = 0;
    this->Score = 100;
    this->ScorePurple = 100;
    this->MeshBodyOrange = NULL;
    this->MeshBodyPurple = NULL;
    this->EffectHitOrange = NULL;
    this->EffectHitPurple = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->SoundDeathPurple = NULL;
    this->MoveSpeedSY = 3000.00f;
    this->ParentIgnoreSpeedSZ = 0.00f;
}


