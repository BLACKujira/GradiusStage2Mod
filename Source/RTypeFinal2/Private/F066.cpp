#include "F066.h"

AF066::AF066(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMesh.AddDefaulted(3);
    this->BodyMaterial.AddDefaulted(3);
    this->DataAssetF066 = NULL;
    this->SibukiPool = NULL;
}


