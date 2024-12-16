#include "E650_yarn.h"

AE650_yarn::AE650_yarn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineMeshComponent.AddDefaulted(10);
    this->SerialNo = 0;
    this->LifeTime = 0.00f;
    this->Param = NULL;
}


