#include "BS505_BodyPartParam.h"

UBS505_BodyPartParam::UBS505_BodyPartParam() {
    this->Life1 = 200;
    this->Life2 = 200;
    this->Life3 = 200;
    this->Defence = 0;
    this->Score = 200;
    this->BodyPartMesh1 = NULL;
    this->BodyPart1AnimBP = NULL;
    this->BodyPartMesh2 = NULL;
    this->BodyPart2AnimBP = NULL;
    this->BodyPartMesh3 = NULL;
    this->BodyPart3AnimBP = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->DeathTime = 1.50f;
    this->ShotEffect = NULL;
}


