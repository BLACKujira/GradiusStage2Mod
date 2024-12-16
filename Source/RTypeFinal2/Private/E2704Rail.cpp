#include "E2704Rail.h"

AE2704Rail::AE2704Rail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticMeshComponent.AddDefaulted(1);
    this->SplineMeshComponent.AddDefaulted(10);
    this->SerialNo = 0;
    this->Param = NULL;
    this->RailMeshData = NULL;
    this->RailPathData = NULL;
    this->ChildIsAround = false;
    this->ChildPosY = 0.00f;
    this->RailRotateSpeed = 0.00f;
}


