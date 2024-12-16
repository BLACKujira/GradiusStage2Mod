#include "F044.h"

AF044::AF044(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMesh.AddDefaulted(7);
    this->BodyMaterial.AddDefaulted(7);
    this->DataAsset = NULL;
}


