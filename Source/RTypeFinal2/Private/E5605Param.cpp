#include "E5605Param.h"

UE5605Param::UE5605Param() {
    this->BridgeNum = 2;
    this->Mesh = NULL;
    this->MeshCollision = NULL;
    this->MeshRing = NULL;
    this->MeshHatch = NULL;
    this->AnimBPHatch = NULL;
    this->RingRotSpeed = 0.00f;
    this->HatchOpenAngle = 0.00f;
    this->HatchOpenEndAngle = 0.00f;
    this->HatchCloseAngle = 0.00f;
    this->SoundHatchOpen = NULL;
    this->SoundHatchClose = NULL;
    this->WarpStartEffect = NULL;
    this->WarpStartSound = NULL;
    this->WarpEndEffect = NULL;
    this->WarpEndSound = NULL;
    this->EffectDeath = NULL;
    this->DeathSound = NULL;
    this->DeathFireSound = NULL;
    this->DeathMoveTime = 0.00f;
}


