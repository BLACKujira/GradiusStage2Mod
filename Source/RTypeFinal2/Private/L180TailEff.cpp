#include "L180TailEff.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL180TailEff::AL180TailEff(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Body"));
    this->NS_Body->SetupAttachment(RootComponent);
}


