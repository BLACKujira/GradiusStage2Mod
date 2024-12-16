#include "B014SHOCK.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AB014SHOCK::AB014SHOCK(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBody"));
    this->ownerBit = NULL;
    this->PreActor = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


