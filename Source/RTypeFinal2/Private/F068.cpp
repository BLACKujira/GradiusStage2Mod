#include "F068.h"

AF068::AF068(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMesh.AddDefaulted(3);
    this->BodyMaterial.AddDefaulted(3);
    this->DataAssetF068 = NULL;
    this->GhostPool = NULL;
}


