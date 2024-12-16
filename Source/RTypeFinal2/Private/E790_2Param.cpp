#include "E790_2Param.h"

UE790_2Param::UE790_2Param() {
    this->Port_Defence = 0;
    this->Port_Score = 1500;
    this->StartWaitTime = 3.00f;
    this->TotalBattleTime = 120.00f;
    this->CoreForceWaitTime = 60.00f;
    this->ToBossTime = 1.50f;
    this->BossParam = NULL;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->Port_Mesh = NULL;
    this->Port_AnimBP = NULL;
    this->Core_Mesh = NULL;
    this->Core_AnimBP = NULL;
    this->R9W_Mesh = NULL;
    this->Inhale_Mesh = NULL;
    this->Exhale_Effect = NULL;
    this->Damage_Effect = NULL;
    this->Grow_Effect = NULL;
    this->Force_Effect = NULL;
    this->Inhale_Sound = NULL;
    this->Damage_Sound = NULL;
    this->Death_Sound = NULL;
    this->PortDeathSoundInterval = 0.30f;
    this->Exhale_Sound = NULL;
    this->Change_Sound = NULL;
    this->InhaleRadius = 80000.00f;
    this->InhaleAngle = 150.00f;
    this->InhaleTimer = 1.00f;
    this->InhalePhysicsBias = 8000000.00f;
    this->InhaleGarbageSmallRange = 10000.00f;
    this->E000ParamAsset = NULL;
    this->E710ParamAsset = NULL;
    this->E711ParamAsset = NULL;
    this->ExhaleForcePushSpeed = 5000.00f;
    this->ExhaleWide = 1.00f;
    this->S790FireParamAsset = NULL;
    this->ExhaleFireInterval = 0.30f;
    this->IsExhaleTypeFire = true;
    this->CoreGrowSpeedRate = 1.00f;
    this->CoreGrowAccelRate = 1.20f;
    this->CoreMoveTime = 5.00f;
    this->CoreMoveLength = 3201.56f;
}


