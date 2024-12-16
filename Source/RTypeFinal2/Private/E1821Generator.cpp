#include "E1821Generator.h"
#include "Components/SceneComponent.h"
#include "ExSplineComponent.h"

AE1821Generator::AE1821Generator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ScreenRoot"));
    this->SplineComponent = CreateDefaultSubobject<UExSplineComponent>(TEXT("SplineComponent"));
    this->SerialNo = 0;
    this->BirthNum = 0;
    this->PathRadius = 2000.00f;
    this->PointNum = 8;
    this->PathDir = E1821_PATH_DIR::RIGHT;
    this->AttackStartTimeArray.AddDefaulted(8);
    this->SplineComponent->SetupAttachment(RootComponent);
}

void AE1821Generator::FillSpline() {
}


