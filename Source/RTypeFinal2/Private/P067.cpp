#include "P067.h"
#include "Components/SceneComponent.h"

AP067::AP067(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShotNodeEx = CreateDefaultSubobject<USceneComponent>(TEXT("ShotPosEx"));
    this->DataAsset = NULL;
    this->ShotNodeEx->SetupAttachment(BodyNode);
}


