#include "EnemyActor.h"
#include "Components/SceneComponent.h"

AEnemyActor::AEnemyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Param = NULL;
    this->BornedParam = NULL;
    this->PreActor = NULL;
    this->EnemyType = EEnemyType::ENEMY;
    this->Status = EEnemyStatus::READY;
    this->StatusFlags = EEnemyStatusBits::None;
    this->ConfigFlags = EEnemyConfigBits::None;
    this->ClipFlags = EEnemyClipBits::None;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PathPlayerComponent = NULL;
    this->PathDataAsset = NULL;
    this->EnemyShoot = NULL;
    this->EnemyLand = NULL;
    this->EnemyHit = NULL;
}
