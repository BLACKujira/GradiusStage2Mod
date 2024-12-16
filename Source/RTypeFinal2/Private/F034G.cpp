#include "F034G.h"
#include "Components/StaticMeshComponent.h"

AF034G::AF034G(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("body"));
    this->body = (UStaticMeshComponent*)RootComponent;
}


