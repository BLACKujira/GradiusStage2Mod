#include "L126.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AL126::AL126(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->SM_Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("M_Body"));
    this->Mi_Body = NULL;
    this->Env = NULL;
    this->SM_Body->SetupAttachment(RootComponent);
}


