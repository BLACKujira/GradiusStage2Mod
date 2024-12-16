#include "UtilGame.h"

UUtilGame::UUtilGame() {
}

void UUtilGame::SetFixedFrameRate(bool _use, float _frameRate) {
}

void UUtilGame::PlayerDead(UObject* _worldContext) {
}

bool UUtilGame::IsCompetitionGameMode(UObject* _worldContext) {
    return false;
}

bool UUtilGame::IsCompetition(UObject* _worldContext) {
    return false;
}

AScreenActor* UUtilGame::GetScreenActor(UObject* _worldContext) {
    return NULL;
}

AE28GameTick_Competition* UUtilGame::GetGameTickCompetition(UObject* _worldContext) {
    return NULL;
}

void UUtilGame::GetFixedFrameRate(bool& _use, float& _frameRate) {
}

UConfigGame* UUtilGame::GetConfigGame() {
    return NULL;
}


