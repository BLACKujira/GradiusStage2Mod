#include "BS027.h"
#include "EEnemyType.h"
#include "EnemyShoot.h"

ABS027::ABS027(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->EnemyType = EEnemyType::BULLET;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(5);
    this->PrimitiveComponentB.AddDefaulted(5);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(26);
    this->EnemyShoot = CreateDefaultSubobject<UEnemyShoot>(TEXT("SHOOT"));
    this->bIsMapObject = true;
    this->ParamBS027 = NULL;
    this->StaticMeshComponent.AddDefaulted(5);
    this->CannonArray.AddDefaulted(5);
    this->LargeBeamArray.AddDefaulted(5);
    this->AudioComponentBeam = NULL;
}


