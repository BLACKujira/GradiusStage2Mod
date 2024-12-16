#include "E3620Param.h"

UE3620Param::UE3620Param() {
    this->Defence = 0;
    this->Score = 12400;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->ShootEffect = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->ShootSound = NULL;
    this->ShootSoundInterval = 0.10f;
    this->BackLength = 2000.00f;
    this->BackSpeed = 2000.00f;
    this->ForwardSpeed = 2000.00f;
    this->PreOpenTime = 1.00f;
    this->OpenTime = 1.00f;
    this->CloseTime = 1.00f;
    this->BombParam = NULL;
}


