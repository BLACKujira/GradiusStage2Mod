#include "BS029HomingBulletParam.h"

UBS029HomingBulletParam::UBS029HomingBulletParam() {
    this->Power = 100;
    this->StraightTime = 0.00f;
    this->SearchInterval = 0.00f;
    this->SearchStopTime = 0.00f;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->DeathTime = 1.50f;
    this->DeathSound = NULL;
    this->DeathSoundWaitTime = 0.00f;
    this->DamageSound = NULL;
    this->DamageSoundWaitTime = 0.00f;
}


