#include "F062.h"

AF062::AF062(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMesh.AddDefaulted(3);
    this->BodyMaterial.AddDefaulted(3);
    this->DataAssetF062 = NULL;
    this->MisEnv = NULL;
}


