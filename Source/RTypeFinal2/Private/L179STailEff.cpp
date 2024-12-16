#include "L179STailEff.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL179STailEff::AL179STailEff(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Body"));
    this->NS_Body->SetupAttachment(RootComponent);
}


