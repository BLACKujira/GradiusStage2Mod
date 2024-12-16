#include "E3311_rail.h"

AE3311_rail::AE3311_rail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticMeshComponent.AddDefaulted(1);
    this->SerialNo = 0;
    this->Param = NULL;
    this->ChildArray = NULL;
}


