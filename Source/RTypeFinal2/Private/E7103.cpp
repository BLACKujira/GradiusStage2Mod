#include "E7103.h"
#include "Components/SceneComponent.h"
#include "EnemyHit.h"
#include "EnemyPathPlayerComponent.h"

AE7103::AE7103(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EffectComponent.AddDefaulted(13);
    this->AudioComponent.AddDefaulted(3);
    this->EnemyHit = CreateDefaultSubobject<UEnemyHit>(TEXT("EnemyHit"));
    this->CollisionRootA = CreateDefaultSubobject<USceneComponent>(TEXT("CollisionRootA"));
    this->CollisionRootB = CreateDefaultSubobject<USceneComponent>(TEXT("CollisionRootB"));
    this->CollisionRootC = CreateDefaultSubobject<USceneComponent>(TEXT("CollisionRootC"));
    this->ShotPitchCenter = CreateDefaultSubobject<USceneComponent>(TEXT("ShotPitchCenter"));
}


