#include "L194.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "NiagaraComponent.h"

AL194::AL194(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->BASE = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BASE"));
    this->bone = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("bone"));
    this->Parts.AddDefaulted(13);
    this->PartT.AddDefaulted(15);
    this->Env = NULL;
    this->DataAsset = NULL;
    this->BASE->SetupAttachment(RootComponent);
    this->bone->SetupAttachment(RootComponent);
}


