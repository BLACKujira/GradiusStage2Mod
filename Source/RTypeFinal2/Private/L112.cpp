#include "L112.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AL112::AL112(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->SM_Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("M_Body"));
    this->Env = NULL;
    this->SM_Body->SetupAttachment(RootComponent);
}


