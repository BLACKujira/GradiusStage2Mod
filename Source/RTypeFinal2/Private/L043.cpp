#include "L043.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AL043::AL043(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->ST_BODY = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StBody"));
    this->ST_Body2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StBody2"));
    this->Env = NULL;
    this->ST_BODY->SetupAttachment(RootComponent);
    this->ST_Body2->SetupAttachment(RootComponent);
}


