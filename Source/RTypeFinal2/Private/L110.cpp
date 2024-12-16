#include "L110.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL110::AL110(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("body"));
    this->LightComponent = NULL;
    this->BodyEff = NULL;
    this->nowRoot = NULL;
    this->Env = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


