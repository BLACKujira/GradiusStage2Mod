#include "E382Param.h"

UE382Param::UE382Param() {
    this->CollisionBoxA.AddDefaulted(7);
    this->CollisionBoxC.AddDefaulted(7);
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->JetEffect = NULL;
    this->E385Param = NULL;
    this->E388Param = NULL;
    this->FallSpeed = 500.00f;
}


