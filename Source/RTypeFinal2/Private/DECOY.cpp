#include "DECOY.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

ADECOY::ADECOY(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->ST_BODY = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StBody"));
    this->Mi_Body = NULL;
    this->Env = NULL;
    this->ST_BODY->SetupAttachment(RootComponent);
}


