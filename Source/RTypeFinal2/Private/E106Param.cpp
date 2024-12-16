#include "E106Param.h"

UE106Param::UE106Param() {
    this->BodyDefence = 0;
    this->BodyScore = 0;
    this->HatchDefence = 0;
    this->HatchScore = 0;
    this->HatchL_CollisionA.AddDefaulted(4);
    this->HatchL_CollisionB.AddDefaulted(4);
    this->HatchL_CollisionC.AddDefaulted(4);
    this->HatchR_CollisionA.AddDefaulted(4);
    this->HatchR_CollisionB.AddDefaulted(4);
    this->HatchR_CollisionC.AddDefaulted(4);
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->HatchL_Mesh = NULL;
    this->HatchL_AnimBP = NULL;
    this->HatchR_Mesh = NULL;
    this->HatchR_AnimBP = NULL;
    this->MoveSpeedEntry = 0.00f;
    this->MoveSpeedAttack = 0.00f;
    this->MoveSpeedExit = 0.00f;
    this->AttackParam = NULL;
    this->AttackDelay = 0.00f;
    this->AttackSecondIndex = 0;
    this->SoundDamage = NULL;
    this->SoundDeath = NULL;
    this->SoundHatchOpen = NULL;
    this->SoundHatchClose = NULL;
    this->MaskMaterialUnwrap = NULL;
    this->MaskMaterialMaskDraw = NULL;
    this->MaskDrawRadius = 500.00f;
    this->MaskDrawHardness = 0.50f;
    this->SliceMeshBody = NULL;
    this->SliceMeshHatchL = NULL;
    this->SliceMeshHatchR = NULL;
    this->SliceCapMaterial = NULL;
    this->SliceMoveSpeed = 0.00f;
    this->SliceRotateSpeed = 0.00f;
    this->SliceExplosionWaitTime = 0.00f;
    this->SliceExplosionDelayTime = 0.00f;
    this->SliceDistance = 0.00f;
}


