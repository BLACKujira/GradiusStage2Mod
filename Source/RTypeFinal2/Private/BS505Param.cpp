#include "BS505Param.h"

UBS505Param::UBS505Param() {
    this->Defence = 0;
    this->Head_Score = 10000;
    this->Stomach_Score = 10000;
    this->Head_Mesh = NULL;
    this->Head_KMesh = NULL;
    this->Head_AnimBP = NULL;
    this->Stomach_Mesh = NULL;
    this->Stomach_KMesh = NULL;
    this->Stomach_AnimBP = NULL;
    this->Tail_Mesh = NULL;
    this->Tail_AnimBP = NULL;
    this->HeadDestructTime = 60.00f;
    this->HeadDeathTime = 1.00f;
    this->HeadOpenInterval = 3.00f;
    this->HeadOpenTime = 3.00f;
    this->HeadDownTime = 6.00f;
    this->StomachDestructTime = 60.00f;
    this->StomachDeathTime = 1.00f;
    this->StomachOpenWaitTime = 3.00f;
    this->StomachOpenInterval = 3.00f;
    this->StomachLaserChargeTime = 1.00f;
    this->StomachLaserWideTime = 1.00f;
    this->StomachLaserAttackTime = 3.00f;
    this->BS505_BodyParam = NULL;
    this->BS505_BallParam = NULL;
    this->BallWaitTime = 3.00f;
    this->BallRndRot = 10.00f;
    this->BallStraightLength = 2000.00f;
    this->BallSearchTime = 3.00f;
    this->BallSearchInterval = 0.03f;
    this->BallSearchRot = 180.00f;
    this->BS505_LaserParam = NULL;
    this->HeadLaserWaitTime = 3.00f;
    this->HeadLaserStopTime = 1.00f;
    this->BS505_ShinenhaParam = NULL;
    this->ChargeEffect = NULL;
    this->LaserEffect = NULL;
    this->SoundHeadOpen = NULL;
    this->SoundHeadLaser = NULL;
    this->SoundHeadClose = NULL;
    this->SoundStomachOpen = NULL;
    this->SoundLaser = NULL;
    this->SoundStomachClose = NULL;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->DeathTime = 1.50f;
    this->Head_Material1 = NULL;
    this->Head_Material2 = NULL;
    this->Head_Material3 = NULL;
    this->Stomach_Material1 = NULL;
    this->Stomach_Material2 = NULL;
    this->Stomach_Material3 = NULL;
    this->Stomach_Material4 = NULL;
    this->Stomach_Material5 = NULL;
    this->Stomach_Material6 = NULL;
    this->Stomach_Material7 = NULL;
}


