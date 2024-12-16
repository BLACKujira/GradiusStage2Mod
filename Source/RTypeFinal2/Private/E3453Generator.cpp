#include "E3453Generator.h"
#include "Components/SceneComponent.h"
#include "ExSplineComponent.h"

AE3453Generator::AE3453Generator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ScreenRoot"));
    this->SplineComponent = CreateDefaultSubobject<UExSplineComponent>(TEXT("SplineComponent"));
    this->SerialNo = 0;
    this->BirthNum = 0;
    this->SplineComponent->SetupAttachment(RootComponent);
}

void AE3453Generator::FillSpline() {
}


