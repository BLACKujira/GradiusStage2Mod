#include "E1191Arm.h"
#include "ExSplineComponent.h"

AE1191Arm::AE1191Arm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(5);
    this->ParentActor = NULL;
    this->Spline = CreateDefaultSubobject<UExSplineComponent>(TEXT("Spline"));
    this->Spline->SetupAttachment(RootComponent);
}


