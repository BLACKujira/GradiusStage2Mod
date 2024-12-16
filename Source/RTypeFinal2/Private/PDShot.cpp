#include "PDShot.h"
#include "Components/StaticMeshComponent.h"

APDShot::APDShot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ST_BODY = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StBody"));
    this->ST_BODY->SetupAttachment(RootComponent);
}


