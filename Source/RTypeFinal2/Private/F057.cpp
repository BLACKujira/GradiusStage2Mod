#include "F057.h"
#include "NiagaraComponent.h"

AF057::AF057(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMesh.AddDefaulted(3);
    this->BodyMaterial.AddDefaulted(3);
    this->DataAsset = NULL;
    this->NC_Shoot2 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NcShoot2"));
    this->GhostPool = NULL;
    this->NC_Shoot2->SetupAttachment(RootComponent);
}


