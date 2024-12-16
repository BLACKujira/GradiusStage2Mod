#include "SplineActor.h"
#include "ExSplineComponent.h"

ASplineActor::ASplineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UExSplineComponent>(TEXT("SplineComponent"));
    this->SplineComponent = (UExSplineComponent*)RootComponent;
}


