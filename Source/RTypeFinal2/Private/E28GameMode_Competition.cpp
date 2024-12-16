#include "E28GameMode_Competition.h"
#include "AircraftDummyPawn.h"
#include "E28GameState_Competition.h"
#include "ShooterPlayerController.h"
#include "ShooterPlayerState.h"

AE28GameMode_Competition::AE28GameMode_Competition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AE28GameState_Competition::StaticClass();
    this->PlayerControllerClass = AShooterPlayerController::StaticClass();
    this->PlayerStateClass = AShooterPlayerState::StaticClass();
    this->DefaultPawnClass = AAircraftDummyPawn::StaticClass();
    this->bPauseable = false;
}

void AE28GameMode_Competition::Server_SpawnAircraftPawn_Implementation(AController* _newPlayer, const FTransform& _spawnTransform) {
}
bool AE28GameMode_Competition::Server_SpawnAircraftPawn_Validate(AController* _newPlayer, const FTransform& _spawnTransform) {
    return true;
}


