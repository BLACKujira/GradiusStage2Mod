#include "L183.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "NiagaraComponent.h"

AL183::AL183(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ScreenNode"));
    this->ScreenNode = (USceneComponent*)RootComponent;
    this->RootNode = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->SM_Body = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SmBody"));
    this->NS_Tail = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsTail"));
    this->Env = NULL;
    this->RootNode->SetupAttachment(RootComponent);
    this->SM_Body->SetupAttachment(RootNode);
    this->NS_Tail->SetupAttachment(RootComponent);
}


