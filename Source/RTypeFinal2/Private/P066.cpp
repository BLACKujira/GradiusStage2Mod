#include "P066.h"
#include "Components/SceneComponent.h"

AP066::AP066(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShotNodeEx = CreateDefaultSubobject<USceneComponent>(TEXT("ShotPosEx"));
    this->DataAsset = NULL;
    this->ShotNodeEx->SetupAttachment(BodyNode);
}


