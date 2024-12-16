#include "L012.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL012::AL012(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("body"));
    this->BodyEff = NULL;
    this->nowRoot = NULL;
    this->Env = NULL;
    this->DataAsset = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


