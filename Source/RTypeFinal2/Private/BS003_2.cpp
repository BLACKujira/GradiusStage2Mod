#include "BS003_2.h"
#include "SkeletalMeshComponentBudgeted.h"

ABS003_2::ABS003_2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(8);
    this->PrimitiveComponentC.AddDefaulted(7);
    this->EffectComponent.AddDefaulted(6);
    this->bIsMapObject = true;
    this->ParamBS003_2 = NULL;
    this->BodyMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Body_Mesh"));
    this->AudioComponentCharge = NULL;
    this->AudioComponentBeam = NULL;
    this->BodyMesh->SetupAttachment(RootComponent);
}


