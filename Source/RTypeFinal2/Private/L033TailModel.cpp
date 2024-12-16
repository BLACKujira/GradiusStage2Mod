#include "L033TailModel.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AL033TailModel::AL033TailModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StBody"));
    this->Mi_Body = NULL;
    this->body->SetupAttachment(RootComponent);
}


