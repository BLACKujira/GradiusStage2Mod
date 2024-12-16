#include "BS701PartsParam.h"

UBS701PartsParam::UBS701PartsParam() {
    this->MinHalfHeight_Small = 900.00f;
    this->MinHalfHeight_Big = 1500.00f;
    this->MinRad_Big = 300.00f;
    this->MinHalfHeight_Big_Fing1 = 800.00f;
    this->ColChangeDistance_Up = 8000.00f;
    this->ColChangeDistance_Down = 8000.00f;
    this->BodyMesh_Up = NULL;
    this->BodyMesh_Down = NULL;
    this->BodyMesh_Death = NULL;
    this->DeathWaitTime = 1.00f;
    this->DeathInterval = 0.50f;
    this->AnimBP_Up = NULL;
    this->AnimBP_Down = NULL;
    this->BodyAnimIdle = NULL;
    this->BodyAnimExp = NULL;
    this->BodyAnimDeath = NULL;
    this->Mesh_Small_Protrude_Up = NULL;
    this->Mesh_Small_Protrude_Down = NULL;
    this->Mesh_Big_Protrud_Left = NULL;
    this->Mesh_Big_Protrud_Right = NULL;
    this->AnimBP_Small_Up = NULL;
    this->AnimBP_Small_Down = NULL;
    this->AnimBP_Big_Left = NULL;
    this->AnimBP_Big_Right = NULL;
    this->AppStartPathPos = 0.00f;
    this->AppDistance = 25000.00f;
    this->AvoidX = 3000.00f;
    this->AvoidRightX = 6000.00f;
    this->StartZ = 2500.00f;
    this->PathMoveSpeed = 0.00f;
    this->AppEff = NULL;
    this->HitEff = NULL;
    this->BeamHitEff = NULL;
    this->deathEff = NULL;
    this->MoveSound = NULL;
    this->ExpSound0 = NULL;
    this->ExpSound = NULL;
    this->DeathSound = NULL;
}


