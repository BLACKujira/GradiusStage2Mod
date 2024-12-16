#include "BS006TentacleParam.h"

UBS006TentacleParam::UBS006TentacleParam() {
    this->Score = 0;
    this->MainBranch_Mesh = NULL;
    this->Joint_Mesh = NULL;
    this->MainBranch_CollisionRadius_A = 200.00f;
    this->MainBranch_CollisionRadius_B = 150.00f;
    this->MainBranch_CollisionRadius_C = 100.00f;
    this->SubBranch_CollisionRadiusRate_A = 0.60f;
    this->SubBranch_CollisionRadiusRate_B = 0.50f;
    this->SubBranch_CollisionRadiusRate_C = 0.40f;
    this->JointMoveSpeed = 12.00f;
    this->MaxBentTime = 0.30f;
    this->MaxBentBlend = 0.70f;
    this->SubBranch_GrowTime = 0.50f;
    this->SubBranch_AngleRange = 45.00f;
    this->HitFlashMaterialParamName = TEXT("rim_color_power");
    this->DitherMaterialParamName = TEXT("Dither");
    this->CurveDamagedFlash = NULL;
    this->CurveDeathFlash = NULL;
    this->CurveDeathDither = NULL;
    this->CurveSignFlash = NULL;
    this->CurveRecoverFlash = NULL;
    this->DeathTime = 1.00f;
    this->SoundDeath = NULL;
    this->SoundRecover = NULL;
    this->TentacleUpdateInterval = 1;
}


