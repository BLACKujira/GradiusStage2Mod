#include "EnemyPathPlayerComponent.h"

UEnemyPathPlayerComponent::UEnemyPathPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PathDataAsset = NULL;
    this->Path = NULL;
}


