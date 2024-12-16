#include "E790_1Param.h"

UE790_1Param::UE790_1Param() {
    this->Armor_Defence = 0;
    this->Armor_Score = 1000;
    this->Exhale_Defence = 0;
    this->Exhale_Score = 300;
    this->Body_Mesh[0] = NULL;
    this->Body_Mesh[1] = NULL;
    this->Body_Mesh[2] = NULL;
    this->Body_Mesh[3] = NULL;
    this->Body_AnimBP[0] = NULL;
    this->Body_AnimBP[1] = NULL;
    this->Body_AnimBP[2] = NULL;
    this->Body_AnimBP[3] = NULL;
    this->Armor_Mesh[0] = NULL;
    this->Armor_Mesh[1] = NULL;
    this->Armor_Mesh[2] = NULL;
    this->Armor_AnimBP[0] = NULL;
    this->Armor_AnimBP[1] = NULL;
    this->Armor_AnimBP[2] = NULL;
    this->R9WB_Mesh = NULL;
    this->R9WF_Mesh = NULL;
    this->R9WZ_Mesh = NULL;
    this->CollisionData[0] = NULL;
    this->CollisionData[1] = NULL;
    this->CollisionData[2] = NULL;
    this->CollisionData[3] = NULL;
    this->InhaleEffect = NULL;
    this->ChargeEffect_1 = NULL;
    this->ChargeEffect_2 = NULL;
    this->HeadEffect = NULL;
    this->GelEffect = NULL;
    this->MistEffect = NULL;
    this->LaserSignEffect = NULL;
    this->ScrapEffect = NULL;
    this->InhaleSound = NULL;
    this->ExhaleSound = NULL;
    this->ChargeSound_1 = NULL;
    this->ChargeSound_2 = NULL;
    this->WaveSound_kari = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->InhaleRadius = 7000.00f;
    this->InhaleAngle = 45.00f;
    this->InhaleTimer = 1.00f;
    this->InhalePhysicsBias = 8000000.00f;
    this->ExhaleBulletParam = NULL;
    this->ExhaleSpeed = 7000.00f;
    this->ExhaleGravity = 4000.00f;
    this->ExhaleRandomAngle = 10.00f;
    this->LaserDataAssetR = NULL;
    this->LaserDataAssetB = NULL;
    this->LaserDataAssetY = NULL;
    this->LaserShootInterval = 1.00f;
    this->LaserSignEndTime = 0.50f;
    this->WaveChargeTime = 1.50f;
    this->WaveShootTime = 1.00f;
    this->WaveRandomFlag = false;
    this->WaveParam_H017 = NULL;
    this->WaveParam_H044 = NULL;
    this->WaveParam_H018 = NULL;
}


