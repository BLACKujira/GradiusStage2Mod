#include "E382.h"
#include "SkeletalMeshComponentBudgeted.h"

AE382::AE382(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(8);
    this->PrimitiveComponentC.AddDefaulted(8);
    this->EffectComponent.AddDefaulted(1);
    this->bIsMapObject = true;
    this->ParamE382 = NULL;
    this->BodyMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Body_Mesh"));
    this->Path = NULL;
    this->BodyMesh->SetupAttachment(RootComponent);
}


