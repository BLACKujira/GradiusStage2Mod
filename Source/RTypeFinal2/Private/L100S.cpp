#include "L100S.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AL100S::AL100S(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->SM_Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("M_Body"));
    this->Mi_Body = NULL;
    this->Env = NULL;
    this->SM_Body->SetupAttachment(RootComponent);
}


