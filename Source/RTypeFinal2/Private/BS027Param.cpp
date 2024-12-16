#include "BS027Param.h"

UBS027Param::UBS027Param() {
    this->Defence = 0;
    this->Score = 20000;
    this->CollisionA_Offset = 1000.00f;
    this->CollisionB_Offset = 1000.00f;
    this->Collision_Body.AddDefaulted(5);
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->BrokenCannonBodyMesh = NULL;
    this->NoDamageSE = NULL;
    this->WaitNodamageSETime = 0.10f;
    this->DamageSE = NULL;
    this->WaitDamageSETime = 0.10f;
    this->MiddleExplosionSE = NULL;
    this->LargeExplosionSE = NULL;
    this->ChargeSE = NULL;
    this->LargeBeamSE = NULL;
    this->SmallBeamSE = NULL;
    this->DeathTime = 5.00f;
    this->DeathSoundDelay = 1.00f;
    this->BS027LargeBeamParam = NULL;
    this->BS027SmallBeamParam = NULL;
    this->LargeBeamAccelerationAngle = 0.00f;
    this->LargeBeamDecelerationAngle = 0.00f;
    this->LargeBeamVanishTime = 0.00f;
    this->LargeBeamEnlargeTime = 1.00f;
    this->SearchBulletSignTime = 1.00f;
    this->SearchBulletShootInterval = 2.00f;
    this->MoveAttackDistance = 0.00f;
    this->MoveAttackNum = 3;
    this->DestructTime = 300.00f;
    this->VernierEffect = NULL;
    this->LargeBeamChageEffect = NULL;
    this->SmallBeamShootEffect = NULL;
    this->SmokeEffect = NULL;
    this->CannonSmokeEffect = NULL;
}


