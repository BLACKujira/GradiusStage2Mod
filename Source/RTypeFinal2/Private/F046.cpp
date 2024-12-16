#include "F046.h"

AF046::AF046(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMesh.AddDefaulted(7);
    this->BodyMaterial.AddDefaulted(7);
    this->DataAsset = NULL;
}


