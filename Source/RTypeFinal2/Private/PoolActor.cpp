#include "PoolActor.h"

APoolActor::APoolActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = true;
    this->ObjectPoolActor = NULL;
}

void APoolActor::Killed() {
}

bool APoolActor::IsPooled() {
    return false;
}

void APoolActor::Created(UObject* _param) {
}

void APoolActor::Borned(UObject* _param) {
}


