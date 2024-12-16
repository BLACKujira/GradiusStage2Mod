#include "M002B.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AM002B::AM002B(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CurrentRoot"));
    this->CurrentRoot = (USceneComponent*)RootComponent;
    this->XX_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("XxBody"));
    this->LightComponent = NULL;
    this->DataAsset = NULL;
    this->XX_Body->SetupAttachment(RootComponent);
}


