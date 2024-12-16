#include "W005.h"
#include "Components/StaticMeshComponent.h"

AW005::AW005(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ST_BODY = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StBody"));
    this->ST_BODY->SetupAttachment(RootComponent);
}


