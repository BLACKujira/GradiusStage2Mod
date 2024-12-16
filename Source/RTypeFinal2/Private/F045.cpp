#include "F045.h"

AF045::AF045(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMesh.AddDefaulted(7);
    this->BodyMaterial.AddDefaulted(7);
    this->DataAsset = NULL;
}


