#include "GhostManager.h"

UGhostManager::UGhostManager() {
    this->ConfigAsset = NULL;
}

void UGhostManager::DelegateRecordFinished(AGhostRecorder* _recorder) {
}

void UGhostManager::BpStartPlay() {
}

void UGhostManager::BpSetupPlayRecords() {
}

void UGhostManager::BpGetScoresSortByPlayerIndex(int32 _arrayNum, TArray<FGhostScoreData>& _scores) {
}

void UGhostManager::BpGetScores(TArray<FGhostScoreData>& _scores) {
}

bool UGhostManager::BpConsumeRequestPlay() {
    return false;
}


