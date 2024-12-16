#include "L120.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AL120::AL120(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->SM_Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("M_Body"));
    this->Mi_Body = NULL;
    this->Env = NULL;
    this->SM_Body->SetupAttachment(RootComponent);
}


