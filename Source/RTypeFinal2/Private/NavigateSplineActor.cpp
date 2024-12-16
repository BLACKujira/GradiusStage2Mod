#include "NavigateSplineActor.h"
#include "Components/SceneComponent.h"
#include "SplineCmdPlayer.h"

ANavigateSplineActor::ANavigateSplineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SplineCmdPlayer = CreateDefaultSubobject<USplineCmdPlayer>(TEXT("SplineCmdPlayer"));
}

void ANavigateSplineActor::StartMove(USplineCmdAsset* _splineCmd) {
}

void ANavigateSplineActor::SetRotateOffset(const FRotator& _rot) {
}


