#include "E28GameStateBase.h"
#include "Net/UnrealNetwork.h"

AE28GameStateBase::AE28GameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumStartPlayer = 0;
}

void AE28GameStateBase::SetNumStartPlayer(int32 _num) {
}

void AE28GameStateBase::RemoveLoginPlayer(APlayerState* _playerState) {
}

void AE28GameStateBase::OnRep_NumStartPlayer() {
}

int32 AE28GameStateBase::GetNumStartPlayer() const {
    return 0;
}







void AE28GameStateBase::AddLoginPlayer(APlayerState* _playerState) {
}

void AE28GameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AE28GameStateBase, NumStartPlayer);
    DOREPLIFETIME(AE28GameStateBase, LoginPlayerArray);
}


