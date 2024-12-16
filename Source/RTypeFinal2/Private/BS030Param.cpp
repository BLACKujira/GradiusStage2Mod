#include "BS030Param.h"

UBS030Param::UBS030Param() {
    this->Score = 0;
    this->DeathTime = 0.00f;
    this->BodyMesh = NULL;
    this->BodyAnim = NULL;
    this->CheckCollision_Offset = 0.00f;
    this->Neneki_Offset = 0.00f;
    this->WaitDamageSETime = 0.07f;
    this->SoundDamage = NULL;
    this->WaitDeathSETime = 0.10f;
    this->SoundDeath = NULL;
    this->MovingEffect = NULL;
    this->DamageSmokeEffect = NULL;
    this->LandingEffect = NULL;
    this->GroundExplosionEffectTime = 0.00f;
    this->InitialMoveTime = 0.00f;
    this->TotalBattleTime = 0.00f;
    this->GenerationLengthGA = 0.00f;
    this->GenerationAngleGA = 0.00f;
    this->GroupWaitTimeGA = 0.00f;
    this->GenerationLengthGB = 0.00f;
    this->GenerationAngleGB = 0.00f;
    this->GroupWaitTimeGB = 0.00f;
    this->GenerationLengthGC = 0.00f;
    this->GenerationAngleGC = 0.00f;
    this->GroupWaitTimeGC = 0.00f;
    this->GenerationInterval_Hori = 0.00f;
    this->GenerationInterval_Vert = 0.00f;
    this->GenerationLength_1 = 0.00f;
    this->GenerationLength_23 = 0.00f;
    this->GenerationAngleF = 0.00f;
    this->GenerationAngleH = 0.00f;
    this->GenerationAngleN = 0.00f;
    this->GenerationAngleP = 0.00f;
    this->GroupWaitTime_123 = 0.00f;
    this->NenekiInterval = 1500.00f;
    this->EnemyGenerationSignTime = 0.00f;
    this->EnemyGenerationTime = 0.00f;
    this->EnemyGenerationWaitTime = 0.00f;
    this->AttackBSignTime = 0.00f;
    this->AttackCSignTime = 0.00f;
    this->AttackCWaitTime = 0.00f;
    this->CoreMoveTime = 0.00f;
    this->MovePath = NULL;
    this->RotateSlerpTime = 0.00f;
    this->ForwardCheckLength = 0.00f;
    this->DownCheckLength = 0.00f;
    this->UpCheckLength = 0.00f;
    this->AttackC_MoveTime = 0.00f;
    this->AttackCJumpInterval = 0.00f;
    this->MoveDirection.AddDefaulted(10);
    this->ChildParam = NULL;
    this->NenekiParam = NULL;
    this->CamaraShake = NULL;
}


