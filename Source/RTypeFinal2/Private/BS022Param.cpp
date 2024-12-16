#include "BS022Param.h"

UBS022Param::UBS022Param() {
    this->TentacleUpperLife = 5000.00f;
    this->TentacleLowerLife = 5000.00f;
    this->TentacleTailLife = 10000.00f;
    this->Defence = 0;
    this->Score = 60000;
    this->BaitScore = 1000;
    this->TentacleUpperScore = 5000;
    this->TentacleLowerScore = 5000;
    this->TentacleTailScore = 10000;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->damage_smoke = NULL;
    this->SoundDamage = NULL;
    this->SoundDamageCore = NULL;
    this->SoundDeath = NULL;
    this->SoundDeathCore = NULL;
    this->SoundBite = NULL;
    this->SoundTentacleGenerate = NULL;
    this->SoundTentacleRetreat = NULL;
    this->SoundBaitGenerate = NULL;
    this->SoundBaitRetreat = NULL;
    this->SoundBiteDelay = 0.20f;
    this->SoundTentacleGenerateDelay = 0.60f;
    this->SoundTentacleRetreatDelay = 0.10f;
    this->SoundBaitGenerateDelay = 0.05f;
    this->SoundBaitRetreatDelay = 0.05f;
    this->DeathTime = 3.00f;
    this->DeformTime = 0.60f;
    this->LinePositionX_1 = 252800.00f;
    this->LinePositionX_2 = 257000.00f;
    this->LinePositionX_3 = 263000.00f;
    this->BaitMoveSpeed = 1000.00f;
    this->LinePositionZ_Top = -1500.00f;
    this->LinePositionZ_Bottom = -11500.00f;
    this->BaitRetreatTime = 20.00f;
    this->TentacleGenerateTime = 2.00f;
    this->BaitGenerateTime = 1.00f;
    this->TimeOutTime = 180.00f;
    this->BaitAttackWaitTime = 0.50f;
    this->Path_0 = NULL;
    this->Path_1 = NULL;
    this->Path_2 = NULL;
    this->Path_3 = NULL;
    this->Path_4 = NULL;
    this->Path_5 = NULL;
    this->Path_6 = NULL;
    this->Path_7 = NULL;
    this->BS022_FighterParam = NULL;
    this->BS022_FrogmanParam = NULL;
    this->BS022_SubmarineParam = NULL;
    this->BS022_TaranParam = NULL;
    this->BS022_TentacleParam = NULL;
    this->BaitLightRadius = 7000.00f;
    this->BaitLightIntensity = 50000.00f;
    this->shadowBias = 1000.00f;
    this->BodyLightIntensity = 7000.00f;
    this->BodyLightOuterConeAngle = 45.00f;
    this->CastShadow_Main = false;
    this->CastShadow_Bait = false;
    this->MouthOpenCloseCollision_Exponent = 0.50f;
    this->DeltaTimeConstant = 0.02f;
}


