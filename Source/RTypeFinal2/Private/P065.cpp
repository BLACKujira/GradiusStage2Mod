#include "P065.h"
#include "Components/SceneComponent.h"

AP065::AP065(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShotNodeEx = CreateDefaultSubobject<USceneComponent>(TEXT("ShotPosEx"));
    this->DataAsset = NULL;
    this->ShotNodeEx->SetupAttachment(BodyNode);
}


