#include "BS007Param.h"

UBS007Param::UBS007Param() {
    this->Defence = 0;
    this->Score = 20000;
    this->ThrustStartWaitTime = 4.00f;
    this->ShootStartWaitTime = 5.00f;
    this->growTime = 120.00f;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->Thrust_Large_Mesh = NULL;
    this->Thrust_Small_Mesh = NULL;
    this->Thrust_AnimBP = NULL;
    this->DebrisScaleMin = 0.70f;
    this->DebrisScaleMax = 1.00f;
    this->BodyFireEffect = NULL;
    this->DebrisFireEffect = NULL;
    this->DebrisEffectIntervalMin = 2.00f;
    this->DebrisEffectIntervalMax = 5.00f;
    this->Damage_Sound = NULL;
    this->StartDeath_Sound = NULL;
    this->Expand_Sound = NULL;
    this->Shrink_Sound = NULL;
    this->Death_Sound = NULL;
    this->BossBGM = NULL;
    this->BGMFadeTime = 0.00f;
    this->RotateSpeed = 90.00f;
    this->ThrustForwardTime_Large = 1.00f;
    this->ThrustForwardTime_Small = 0.50f;
    this->ThrustKeepTime_Large = 0.20f;
    this->ThrustKeepTime_Small = 0.10f;
    this->ThrustBackTime_Large = 2.00f;
    this->ThrustBackTime_Small = 1.00f;
    this->BulletParam = NULL;
    this->BulletSpeed = 6000.00f;
    this->GrowTargetScale = 3.00f;
    this->TimeoutMoveSpeed = 500.00f;
    this->TimeoutMoveChangeTime = 3.00f;
    this->DeathPreExpandTime = 1.00f;
    this->DeathExpandTime = 1.00f;
    this->DeathExpandTargetScale = 5.00f;
    this->DeathShrinkTime = 2.00f;
    this->ClassActor_E790_1 = NULL;
    this->ClassActor_E790_2 = NULL;
    this->DeathExpandCurve = NULL;
    this->DeathShrinkCurve = NULL;
    this->ExpandCamaraShake = NULL;
}


