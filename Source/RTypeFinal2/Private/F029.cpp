#include "F029.h"

AF029::AF029(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMesh.AddDefaulted(3);
    this->BodyMaterial.AddDefaulted(3);
    this->DataAsset = NULL;
    this->GhostPool = NULL;
}


