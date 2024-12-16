#include "BS006Tentacle.h"
#include "Components/SplineComponent.h"
#include "EEnemyType.h"

ABS006Tentacle::ABS006Tentacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyType = EEnemyType::BULLET;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(19);
    this->PrimitiveComponentB.AddDefaulted(19);
    this->MeshComponent.AddDefaulted(23);
    this->JointComponent.AddDefaulted(4);
    this->SplineMeshComponent.AddDefaulted(3);
    this->MainCollisionComponentA.AddDefaulted(3);
    this->MainCollisionComponentB.AddDefaulted(3);
    this->PathSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("PathSpline"));
    this->SubMeshComponent.AddDefaulted(16);
    this->SubCollisionComponentA.AddDefaulted(16);
    this->SubCollisionComponentB.AddDefaulted(16);
    this->ParentActor = NULL;
    this->CurveDamagedFlash = NULL;
    this->CurveDeathFlash = NULL;
    this->CurveDeathDither = NULL;
    this->CurveSignFlash = NULL;
    this->CurveRecoverFlash = NULL;
    this->PathSplineComponent->SetupAttachment(RootComponent);
}


