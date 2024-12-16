#include "E3001.h"

AE3001::AE3001(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(2);
    this->PrimitiveComponentB.AddDefaulted(2);
    this->PrimitiveComponentC.AddDefaulted(2);
    this->MeshComponent.AddDefaulted(2);
    this->EffectComponent.AddDefaulted(1);
    this->bIsMapObject = true;
    this->ParamE3001 = NULL;
    this->SerialNo = 0;
    this->PoleLengthIndex = 0;
    this->SpawnWaitTime = 0.00f;
    this->AttackDirIndex = 0;
    this->SeparteDirIndex = 0;
    this->DispOutTimer = 0.00f;
    this->DispOutFlag = false;
}


