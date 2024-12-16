#include "E1294MaingunParam.h"

UE1294MaingunParam::UE1294MaingunParam() {
    this->TurretRotationSpeed = 30.00f;
    this->TurretRotationStopTime = 2.00f;
    this->ReadyTime = 1.00f;
    this->ShootAngleNum = 32;
    this->ShootUpdateTime = 0.10f;
    this->ShootCount = 0;
    this->ShootInterval = 3.00f;
    this->ShootRapidNum = 1;
    this->ShootRapidInterval = 0.00f;
    this->ReadyEffect = NULL;
    this->ShootEffect = NULL;
    this->ShootSound = NULL;
    this->BulletSpeed = 0.00f;
    this->BulletParam = NULL;
}


