#include "BS707BulletParam.h"

UBS707BulletParam::UBS707BulletParam() {
    this->Life = 1;
    this->Defence = 0;
    this->Score = 100;
    this->MeshBody = NULL;
    this->AnimBPBody = NULL;
    this->EffectShot = NULL;
    this->EffectHit = NULL;
    this->EffectTrailing = NULL;
    this->SoundDeath = NULL;
    this->BulletShotAnimPlayTime = 2.00f;
    this->BulletWaitDeathSETime = 0.07f;
}


