#include "E3450Generator.h"
#include "Components/SceneComponent.h"
#include "ExSplineComponent.h"

AE3450Generator::AE3450Generator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ScreenRoot"));
    this->SplineComponent = CreateDefaultSubobject<UExSplineComponent>(TEXT("SplineComponent"));
    this->SerialNo = 0;
    this->BirthIntervalTime = 0.00f;
    this->BirthDir = EE3450_DIR::UPPER;
    this->BirthNum = 0;
    this->BirthOffsetTime = 0.00f;
    this->BirthNum2 = -1;
    this->SplineComponent->SetupAttachment(RootComponent);
}

void AE3450Generator::FillSpline() {
}


