#include "F058G.h"
#include "Components/StaticMeshComponent.h"

AF058G::AF058G(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("body"));
    this->body = (UStaticMeshComponent*)RootComponent;
}


