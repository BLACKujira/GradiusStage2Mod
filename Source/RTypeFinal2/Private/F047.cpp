#include "F047.h"

AF047::AF047(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMesh.AddDefaulted(7);
    this->BodyMaterial.AddDefaulted(7);
    this->DataAsset = NULL;
}


