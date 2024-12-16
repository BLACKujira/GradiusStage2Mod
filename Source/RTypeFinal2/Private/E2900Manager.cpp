#include "E2900Manager.h"

AE2900Manager::AE2900Manager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Serial = 0;
    this->IsRotate = false;
    this->StopTime = 1.00f;
}


