#include "L182.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"

AL182::AL182(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ScreenNode"));
    this->ScreenNode = (USceneComponent*)RootComponent;
    this->RootNode = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->ST_BODY = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StBody"));
    this->NS_Tail = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsTail"));
    this->Env = NULL;
    this->RootNode->SetupAttachment(RootComponent);
    this->ST_BODY->SetupAttachment(RootNode);
    this->NS_Tail->SetupAttachment(RootComponent);
}


