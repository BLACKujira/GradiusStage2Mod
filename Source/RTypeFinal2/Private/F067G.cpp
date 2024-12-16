#include "F067G.h"
#include "Components/StaticMeshComponent.h"

AF067G::AF067G(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("body"));
    this->body = (UStaticMeshComponent*)RootComponent;
}


