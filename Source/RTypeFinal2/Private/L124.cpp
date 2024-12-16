#include "L124.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AL124::AL124(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MountRoot"));
    this->MountRoot = (USceneComponent*)RootComponent;
    this->RootNode = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->SM_Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("M_Body"));
    this->Mi_Body = NULL;
    this->Env = NULL;
    this->RootNode->SetupAttachment(RootComponent);
    this->SM_Body->SetupAttachment(RootNode);
}


