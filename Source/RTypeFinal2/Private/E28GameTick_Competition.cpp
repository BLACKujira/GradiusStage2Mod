#include "E28GameTick_Competition.h"

AE28GameTick_Competition::AE28GameTick_Competition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScreenActor = NULL;
}

void AE28GameTick_Competition::OnGameOver() {
}

void AE28GameTick_Competition::OnGameClear() {
}

AScreenActor* AE28GameTick_Competition::GetScreenActor() {
    return NULL;
}

void AE28GameTick_Competition::BpGameStart() {
}

void AE28GameTick_Competition::BpGameClear() {
}


