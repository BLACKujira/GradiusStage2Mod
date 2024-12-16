#include "P119.h"
#include "Components/SceneComponent.h"

AP119::AP119(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShotNodeEx = CreateDefaultSubobject<USceneComponent>(TEXT("ShotPosEx"));
    this->DataAsset = NULL;
    this->ShockWaveNode2 = CreateDefaultSubobject<USceneComponent>(TEXT("ShockWavePos2"));
    this->ShotNodeEx->SetupAttachment(BodyNode);
    this->ShockWaveNode2->SetupAttachment(BodyNode);
}


