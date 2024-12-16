#include "L152.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "NiagaraComponent.h"

AL152::AL152(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->BodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BodyMesh"));
    this->NS_Base = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBase"));
    this->lpSE = NULL;
    this->Env = NULL;
    this->pF030 = NULL;
    this->BodyMesh->SetupAttachment(RootComponent);
    this->NS_Base->SetupAttachment(RootComponent);
}


