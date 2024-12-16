#include "L172B.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AL172B::AL172B(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->SM_Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("M_Body"));
    this->Env = NULL;
    this->SM_Body->SetupAttachment(RootComponent);
}


