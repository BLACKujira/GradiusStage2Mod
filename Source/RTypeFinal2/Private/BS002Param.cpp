#include "BS002Param.h"

UBS002Param::UBS002Param() {
    this->CombinationTable = NULL;
    this->RestartMoveInterval = 0.00f;
    this->PowSpawnInterval = 0.00f;
    this->TotalBattleTime = 0.00f;
    this->PowParamAsset = NULL;
    this->ContainerScore = 10000;
    this->ShootSignLightScaleMin = 0.00f;
    this->ShootSignLightScaleMax = 0.00f;
    this->ShootSignLightPowerMin = 0.00f;
    this->ShootSignLightPowerMax = 0.00f;
    this->TurretRotateStopTime = 0.00f;
    this->TurretRotateInterval = 0.00f;
    this->PlantScore = 100;
    this->IsInertiaSeedSpeed = false;
    this->SoundDeath = NULL;
    this->SoundWarning = NULL;
}


