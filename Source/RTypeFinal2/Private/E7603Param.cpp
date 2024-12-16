#include "E7603Param.h"

UE7603Param::UE7603Param() {
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->BackwardDistanceToTurn = 0.00f;
    this->AnimRotationTime = 0.01f;
    this->DeathEffect = NULL;
    this->JetEffect = NULL;
    this->SoundSpawnJet = NULL;
    this->WaitSpawnJetSETime = 0.00f;
    this->RetreartSEDelayTime = 0.00f;
    this->SoundDeath = NULL;
    this->WaitDeathSETime = 0.00f;
    this->SoundBeamCharge = NULL;
    this->WaitBeamChargeSETime = 0.00f;
    this->SoundUnitShot = NULL;
    this->WaitUnitShotSETime = 0.00f;
    this->AttackEffect = NULL;
    this->S7603LaserParam = NULL;
    this->AttackEndEffect = NULL;
    this->UnitActor = NULL;
    this->UnitMesh = NULL;
    this->ShotEffect = NULL;
    this->UnitBulletParam = NULL;
    this->RotationSpeed = 0.00f;
    this->UnitShotStart.AddDefaulted(1);
    this->Score = 2000;
    this->MoveStartTime = 0.00f;
    this->BeamAccumulateTime = 0.00f;
    this->UnitMoveData.AddDefaulted(4);
    this->MoveTargetNum = 0;
    this->UnitShotStartPointNum = 0;
    this->SpawnMoveSpeed = 0.00f;
}


