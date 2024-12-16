#include "E1520.h"
#include "SplineCmdPlayer.h"

AE1520::AE1520(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(45);
    this->MeshComponent.AddDefaulted(1);
    this->SplineCmdPlayer = CreateDefaultSubobject<USplineCmdPlayer>(TEXT("SplineCmdPlayer"));
}


