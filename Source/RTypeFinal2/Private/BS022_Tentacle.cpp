#include "BS022_Tentacle.h"
#include "Components/SplineComponent.h"

ABS022_Tentacle::ABS022_Tentacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(1);
    this->ParentActor = NULL;
    this->BaitActor = NULL;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->SplineComponent->SetupAttachment(RootComponent);
}


