#include "E28GameMode_Shooter.h"
#include "GameFramework/Pawn.h"
#include "ShooterPlayerController.h"

AE28GameMode_Shooter::AE28GameMode_Shooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = AShooterPlayerController::StaticClass();
    this->DefaultPawnClass = APawn::StaticClass();
    this->ScreenActor = NULL;
}

void AE28GameMode_Shooter::BpSetGameExit() {
}

void AE28GameMode_Shooter::BpSetDemo(bool _demo) {
}

void AE28GameMode_Shooter::BpSetCanSkip(bool _skip) {
}

bool AE28GameMode_Shooter::BpIsGameStart() {
    return false;
}

bool AE28GameMode_Shooter::BpIsGameExit() {
    return false;
}

bool AE28GameMode_Shooter::BpIsGameClearTimeup() {
    return false;
}

bool AE28GameMode_Shooter::BpIsGameClear() {
    return false;
}

bool AE28GameMode_Shooter::BpIsDemo() {
    return false;
}

bool AE28GameMode_Shooter::BpIsCanSkip() {
    return false;
}

UStageManager* AE28GameMode_Shooter::BpGetStageManager() {
    return NULL;
}

USplineManager* AE28GameMode_Shooter::BpGetSplineManager() {
    return NULL;
}

USoundManager* AE28GameMode_Shooter::BpGetSoundManager() {
    return NULL;
}

UScrollManager* AE28GameMode_Shooter::BpGetScrollManager() {
    return NULL;
}

AScreenActor* AE28GameMode_Shooter::BpGetScreenActor() {
    return NULL;
}

UPointManager* AE28GameMode_Shooter::BpGetPointManager() {
    return NULL;
}

UMissionManager* AE28GameMode_Shooter::BpGetMissionManager() {
    return NULL;
}

UEnemyManager* AE28GameMode_Shooter::BpGetEnemyManager() {
    return NULL;
}

UDemoEndManager* AE28GameMode_Shooter::BpGetDemoEndManager() {
    return NULL;
}

UCockpitManager* AE28GameMode_Shooter::BpGetCockpitManager() {
    return NULL;
}

void AE28GameMode_Shooter::BpGameStart() {
}

void AE28GameMode_Shooter::BpGameClearTimeup() {
}

void AE28GameMode_Shooter::BpGameClear() {
}

void AE28GameMode_Shooter::BpCockpitOn() {
}

void AE28GameMode_Shooter::BpCockpitOff() {
}

void AE28GameMode_Shooter::BpBossSceneStart() {
}

void AE28GameMode_Shooter::BpBossSceneEnd() {
}


