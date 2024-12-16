#include "L153S.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AL153S::AL153S(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->SM_Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("M_Body"));
    this->Mi_Body = NULL;
    this->part.AddDefaulted(7);
    this->Env = NULL;
    this->SM_Body->SetupAttachment(RootComponent);
}


