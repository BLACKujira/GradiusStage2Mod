#include "E3203_bridgeParam.h"

UE3203_bridgeParam::UE3203_bridgeParam() {
    this->Defence = 0;
    this->Front_Score = 300;
    this->Back_Score = 500;
    this->FrontBodyMesh = NULL;
    this->FrontBodyAnimBP = NULL;
    this->BackBodyMesh = NULL;
    this->BackBodyAnimBP = NULL;
    this->Front_KMesh = NULL;
    this->Back_KMesh = NULL;
    this->FSmokeEffect = NULL;
    this->BSmokeEffect = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->DeathTime = 1.50f;
}


