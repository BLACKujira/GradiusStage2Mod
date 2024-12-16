#include "H045P.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"

AH045P::AH045P(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
    this->NS_Body->SetupAttachment(RootComponent);
    this->MeshComponent->SetupAttachment(RootComponent);
}


