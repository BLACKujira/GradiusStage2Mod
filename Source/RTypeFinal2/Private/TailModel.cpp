#include "TailModel.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

ATailModel::ATailModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StBody"));
    this->Mi_Body = NULL;
    this->body->SetupAttachment(RootComponent);
}


