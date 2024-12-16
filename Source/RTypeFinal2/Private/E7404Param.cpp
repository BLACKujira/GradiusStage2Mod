#include "E7404Param.h"

UE7404Param::UE7404Param() {
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->DeathEffect = NULL;
    this->SoundShot = NULL;
    this->WaitShotSETime = 0.00f;
    this->SoundDeath = NULL;
    this->AttackEffect = NULL;
    this->RecoileEffect = NULL;
    this->AttackParam = NULL;
    this->MoveEffect = NULL;
    this->MoveUpEffect = NULL;
    this->MoveJetEffectAttachSocketNames.AddDefaulted(4);
    this->ShootAngleNum = 0;
    this->Defence = 0;
    this->Score = 100;
    this->MoveStartRange_ForwardUp = 0.00f;
    this->MoveStartRange_ForwardDown = 0.00f;
    this->MoveStartRange_Up = 0.00f;
    this->MoveStartRange_Down = 0.00f;
    this->SearchInterval = 0.00f;
    this->MoveSpeed = 0.00f;
    this->ShotRotLength_Forward = 0.00f;
    this->ShotRotLength_Up = 0.00f;
    this->ShotRotLength_Down = 0.00f;
    this->RecoilMoveTime = 0.00f;
    this->RotationTime = 0.00f;
    this->ShotBulletRotUp = 0.00f;
    this->SpawnVecX = 0;
    this->HuntType = 0;
    this->RetreatTime = 0.00f;
    this->RetreatRot = 0.00f;
}


