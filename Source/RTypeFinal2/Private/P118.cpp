#include "P118.h"
#include "Components/SceneComponent.h"

AP118::AP118(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShotNodeEx = CreateDefaultSubobject<USceneComponent>(TEXT("ShotPosEx"));
    this->DataAsset = NULL;
    this->ShotNodeEx->SetupAttachment(BodyNode);
}


