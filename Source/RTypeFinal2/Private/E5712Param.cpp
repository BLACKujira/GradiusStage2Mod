#include "E5712Param.h"

UE5712Param::UE5712Param() {
    this->Life = 1;
    this->Defence = 0;
    this->Score = 100;
    this->Path_Left = NULL;
    this->Path_Right = NULL;
    this->BodyMesh_Normal = NULL;
    this->BodyMesh_Strong = NULL;
    this->BodyAnimBP = NULL;
    this->SearchRad_Normal = 0.00f;
    this->SearchRad_Strong = 0.00f;
    this->RotSpeed = 0.00f;
    this->TailEff = NULL;
    this->DeathSound = NULL;
}


