#include "E7704Param.h"

UE7704Param::UE7704Param() {
    this->Defence = 0;
    this->Score = 1000;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->MoveSpeed = 0.00f;
    this->ShotStartRadius = 350.00f;
    this->ShotExpRate = 0.50f;
    this->PlayerMoveSpeed = 2000.00f;
    this->TimeDecAmount = 1.00f;
    this->S7704Param = NULL;
    this->ShotEffect = NULL;
    this->JetEffect = NULL;
    this->WaitShotSETime = 0.10f;
    this->WaitDamageSETime = 0.10f;
    this->WaitDeathSETime = 0.10f;
    this->SoundShot = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
}


