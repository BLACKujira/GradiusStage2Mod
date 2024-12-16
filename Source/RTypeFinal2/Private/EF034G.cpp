#include "EF034G.h"
#include "Components/StaticMeshComponent.h"

AEF034G::AEF034G(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("body"));
    this->body = (UStaticMeshComponent*)RootComponent;
    this->Parent = NULL;
}


