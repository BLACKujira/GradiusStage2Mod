#include "F048.h"

AF048::AF048(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMesh.AddDefaulted(7);
    this->BodyMaterial.AddDefaulted(7);
    this->DataAsset = NULL;
}


