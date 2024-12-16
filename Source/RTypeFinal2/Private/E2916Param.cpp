#include "E2916Param.h"

UE2916Param::UE2916Param() {
    this->Defence = 0;
    this->Score = 100;
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->BrokenMesh1 = NULL;
    this->BrokenMesh2 = NULL;
    this->BrokenMesh3 = NULL;
    this->BrokenMesh4 = NULL;
    this->BrokenMesh5 = NULL;
    this->BrokenMesh6 = NULL;
    this->ToothNum = 5;
    this->Radius = 500.00f;
    this->CollisionAOffset = 1.00f;
    this->CollisionBOffset = 0.00f;
    this->CollisionCOffset = 0.00f;
    this->ToothRadius = 30.00f;
    this->ToothHeight = 0.00f;
    this->RotationOffset = 0.00f;
    this->ToothRange = 0.00f;
    this->HatchOpenSound = NULL;
    this->HatchCloseSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->HatchOpenTime = 0.50f;
    this->AttackTime = 1.00f;
    this->E2916HatchParam = NULL;
}


