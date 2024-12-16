#include "P063.h"
#include "Components/SceneComponent.h"

AP063::AP063(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShotNodeEx = CreateDefaultSubobject<USceneComponent>(TEXT("ShotPosEx"));
    this->DataAsset = NULL;
    this->ShotNodeEx->SetupAttachment(BodyNode);
}


