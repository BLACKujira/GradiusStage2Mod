#include "E230Param.h"

UE230Param::UE230Param() {
    this->Body_Score = 1000;
    this->Leg_Score = 1000;
    this->Head_Score = 500;
    this->Body_Top_Mesh = NULL;
    this->Body_Top_C_Mesh = NULL;
    this->Body_Top_AnimBP = NULL;
    this->Body_Bottom_Mesh = NULL;
    this->Body_Bottom_A_Mesh = NULL;
    this->Body_Bottom_B_Mesh = NULL;
    this->Body_Bottom_C_Mesh = NULL;
    this->Body_Bottom_D_Mesh = NULL;
    this->Body_Bottom_AnimBP = NULL;
    this->Head_Mesh = NULL;
    this->Head_AnimBP = NULL;
    this->Leg_Mesh = NULL;
    this->Leg_AnimBP = NULL;
    this->Tail_Mesh = NULL;
    this->Tail_AnimBP = NULL;
    this->BubbleEffect = NULL;
    this->BubbleEffectDelay = 2.00f;
    this->WalkVelocity = 1500.00f;
    this->TurnTime = 3.00f;
    this->AttackTime = 4.00f;
    this->ThreatTailAnimTime = 0.50f;
    this->BulletVelocity = 7000.00f;
    this->BulletCenterAngle = 40.00f;
    this->ShootSocketName = TEXT("tail_shot");
    this->S230ParamAsset = NULL;
    this->DeathSound = NULL;
    this->ThreatSound = NULL;
    this->BrokeHeadLegSound = NULL;
    this->BrokeBodySound = NULL;
    this->ThreatReadySound = NULL;
    this->DispInSound = NULL;
    this->ShootSound = NULL;
    this->DeathTime = 2.00f;
    this->KnockOutTime = 3.00f;
    this->KnockOutDeathTime = 0.50f;
    this->FallTime = 1.50f;
    this->FallTimeWater = 2.50f;
}


