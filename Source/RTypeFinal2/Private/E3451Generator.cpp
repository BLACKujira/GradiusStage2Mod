#include "E3451Generator.h"
#include "Components/SceneComponent.h"
#include "ExSplineComponent.h"

AE3451Generator::AE3451Generator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ScreenRoot"));
    this->SplineComponent = CreateDefaultSubobject<UExSplineComponent>(TEXT("SplineComponent"));
    this->SerialNo = 0;
    this->BirthNum = 0;
    this->PathRadius = 2000.00f;
    this->PointNum = 8;
    this->PathDir = E3451_PATH_DIR::RIGHT;
    this->AttackStartTimeArray.AddDefaulted(8);
    this->SplineComponent->SetupAttachment(RootComponent);
}

void AE3451Generator::FillSpline() {
}


