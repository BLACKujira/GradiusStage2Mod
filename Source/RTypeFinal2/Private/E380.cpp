#include "E380.h"
#include "SkeletalMeshComponentBudgeted.h"

AE380::AE380(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(10);
    this->PrimitiveComponentC.AddDefaulted(10);
    this->EffectComponent.AddDefaulted(4);
    this->bIsMapObject = true;
    this->ParamE380 = NULL;
    this->BodyMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Body_Mesh"));
    this->Path = NULL;
    this->BodyMesh->SetupAttachment(RootComponent);
}


