#include "W009.h"
#include "Components/StaticMeshComponent.h"

AW009::AW009(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ST_BODY = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StBody"));
    this->ST_BODY->SetupAttachment(RootComponent);
}


