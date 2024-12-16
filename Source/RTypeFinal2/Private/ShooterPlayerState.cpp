#include "ShooterPlayerState.h"
#include "Net/UnrealNetwork.h"

AShooterPlayerState::AShooterPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PilotName = TEXT("---");
    this->bSetup = false;
    this->PlayerPhase = EShooterPlayerPhase::None;
}

void AShooterPlayerState::OnRep_PlayerPhase() {
}

void AShooterPlayerState::OnRep_bSetup() {
}

void AShooterPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShooterPlayerState, bSetup);
    DOREPLIFETIME(AShooterPlayerState, PlayerPhase);
}


