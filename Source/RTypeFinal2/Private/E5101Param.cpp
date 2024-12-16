#include "E5101Param.h"

UE5101Param::UE5101Param() {
    this->Life = 100;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->SandEff = NULL;
    this->WaterEff = NULL;
    this->deathEff = NULL;
    this->ChildParam = NULL;
    this->SEFadeTime = 0.50f;
    this->SoundWater = NULL;
    this->SoundDeath = NULL;
}


