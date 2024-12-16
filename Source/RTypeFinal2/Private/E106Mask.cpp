#include "E106Mask.h"
#include "EnemyMaskDraw.h"

AE106Mask::AE106Mask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(3);
    this->ParentActor = NULL;
    this->MaskDraw = CreateDefaultSubobject<UEnemyMaskDraw>(TEXT("MaskDraw"));
    this->MaskDraw->SetupAttachment(RootComponent);
}


