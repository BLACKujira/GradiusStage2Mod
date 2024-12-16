#include "L195.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "NiagaraComponent.h"

AL195::AL195(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->BASE = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BASE"));
    this->bone = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("bone"));
    this->Parts.AddDefaulted(18);
    this->PartT.AddDefaulted(15);
    this->Env = NULL;
    this->DataAsset = NULL;
    this->BASE->SetupAttachment(RootComponent);
    this->bone->SetupAttachment(RootComponent);
}


