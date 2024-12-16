#include "E381.h"
#include "SkeletalMeshComponentBudgeted.h"

AE381::AE381(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(2);
    this->PrimitiveComponentC.AddDefaulted(2);
    this->bIsMapObject = true;
    this->ParamE381 = NULL;
    this->BodyMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Body_Mesh"));
    this->Path = NULL;
    this->AudioSlide = NULL;
    this->BodyMesh->SetupAttachment(RootComponent);
}


