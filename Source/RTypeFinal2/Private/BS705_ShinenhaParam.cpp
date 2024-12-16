#include "BS705_ShinenhaParam.h"

UBS705_ShinenhaParam::UBS705_ShinenhaParam() {
    this->ShinenhaPartParam = NULL;
    this->SpawnIntervalLength = 500.00f;
    this->ShinenhaPartsNum = 13;
    this->ShinenBulletShotIntervalPart = 3;
    this->ShinenhaRails.AddDefaulted(6);
    this->SoundShinenBulletShot = NULL;
    this->PartsIntervalForceShrink = 1.00f;
}


