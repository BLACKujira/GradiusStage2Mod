#include "E7302.h"

AE7302::AE7302(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    //this->mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    //mesh->SetStaticMesh(LoadObject<UStaticMesh>(nullptr, TEXT("/Game/Enemy/E7301/E7301_01SM")));

    this->mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->mesh->SetupAttachment(RootComponent); // 将 Mesh 挂载到根组件
    this->mesh->SetStaticMesh(LoadObject<UStaticMesh>(nullptr, TEXT("/Game/Enemy/E7301/E7301_01SM")));

    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(2);
    this->MeshComponent.Add(mesh);
    this->EffectComponent.AddDefaulted(2);
    this->bIsMapObject = true;
    this->ParamE7302 = NULL;
    this->SerialNo = 0;
    this->isChangeDifficulty = false;

    //mesh->SetRelativeTransform(FTransform::Identity);
    //mesh->SetRelativeLocation(FVector::ZeroVector);
    //mesh->ResetRelativeTransform();
    //mesh->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
}


