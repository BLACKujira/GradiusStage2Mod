#include "E7606Param.h"

UE7606Param::UE7606Param() {
    this->Life = 1;
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->BodyMesh_Head = NULL;
    this->BodyAnimBP_Head = NULL;
    this->BodyMesh_Arms = NULL;
    this->BodyAnimBP_Arms = NULL;
    this->PropertyShoot = TEXT("E7606_shot");
    this->PropertyDeath = TEXT("E7606_death");
    this->MoveEffect = NULL;
    this->MoveSpeed = 3000.00f;
    this->MoveLength = 3000.00f;
    this->BackwardDistanceToTurn = 0.00f;
    this->AttackParam = NULL;
    this->AttackEffect = NULL;
    this->DeathEffect = NULL;
    this->SoundDeath = NULL;
}


