#include "BS305Param.h"

UBS305Param::UBS305Param() {
    this->Defence = 0;
    this->Score = 20000;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->SoundShoot = NULL;
    this->SoundMissile = NULL;
    this->SoundDamage = NULL;
    this->SoundMove = NULL;
    this->SoundStop = NULL;
    this->SoundTurn = NULL;
    this->DeathTime = 1.00f;
    this->DestructTime = 300.00f;
    this->BeamChargeTime = 0.50f;
    this->BeamInterval2 = 1.50f;
    this->BeamSpeed = 5000.00f;
    this->BeamSecondAngle = 30.00f;
    this->BeamThirdAngle = 60.00f;
    this->ColNoTime = 0.50f;
    this->BS305_BulletParam = NULL;
    this->DrillMissileRate = 50;
    this->MissileMoveTime = 0.50f;
    this->DrillMissileAccTime = 1.00f;
    this->DrillMissileSpeed = 3000.00f;
    this->HomingMissileSpeed = 3000.00f;
    this->HomingMissileStrTime = 0.50f;
    this->SearchTime = 2.00f;
    this->HomingRot = 180.00f;
    this->CannonPlayRate = 1.00f;
    this->CannonPlayRate2 = 1.10f;
    this->CannonPlayRate3 = 1.20f;
    this->BS305_DrillMissileParam = NULL;
    this->BS305_HomingMissileParam = NULL;
    this->BFireEffect = NULL;
    this->BigBFireEffect = NULL;
    this->BFireStopEffect = NULL;
    this->ChargeEffect = NULL;
    this->FlashEffect = NULL;
    this->MissileFlashEffect = NULL;
    this->BSmokeEffect = NULL;
    this->WSmokeEffect = NULL;
    this->SparkEffect = NULL;
    this->LegSmokeEffect = NULL;
    this->CoreDamageEffect = NULL;
    this->Material1 = NULL;
}


