#include "E5303Param.h"

UE5303Param::UE5303Param() {
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
}


