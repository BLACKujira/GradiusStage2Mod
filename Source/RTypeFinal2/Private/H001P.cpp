#include "H001P.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"

AH001P::AH001P(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MountRoot"));
    this->Collision_A = CreateDefaultSubobject<USphereComponent>(TEXT("Collision_A"));
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->MountRoot = (USceneComponent*)RootComponent;
    this->nowRoot = NULL;
    this->Collision_A->SetupAttachment(RootNode);
    this->NS_Body->SetupAttachment(RootNode);
}


