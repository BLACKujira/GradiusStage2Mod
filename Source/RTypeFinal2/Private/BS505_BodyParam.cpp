#include "BS505_BodyParam.h"

UBS505_BodyParam::UBS505_BodyParam() {
    this->Defence = 0;
    this->Score = 10000;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->PathData1 = NULL;
    this->PathData2 = NULL;
    this->BS505_BodyPartParam = NULL;
    this->ShotPartSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->DeathTime = 1.50f;
    this->DestructTime = 60.00f;
}


