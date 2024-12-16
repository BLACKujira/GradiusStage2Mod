#include "EH006Decoy.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AEH006Decoy::AEH006Decoy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->OwnerActor = NULL;
    this->RootNode = (USceneComponent*)RootComponent;
    this->ST_BODY = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StBody"));
    this->Mi_Body = NULL;
    this->Env = NULL;
    this->ST_BODY->SetupAttachment(RootComponent);
}


