#include "PBShot.h"
#include "Components/StaticMeshComponent.h"

APBShot::APBShot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ST_BODY = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StBody"));
    this->ST_BODY->SetupAttachment(RootComponent);
}


