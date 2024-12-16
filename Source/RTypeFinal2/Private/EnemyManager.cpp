#include "EnemyManager.h"

UEnemyManager::UEnemyManager() {
    this->ClassNumOverride = NULL;
    this->PreActor = NULL;
}

void UEnemyManager::GetDifficultyData(FEnemyDifficultyData& _outDifficultyData) {
}

TArray<AEnemyActor*> UEnemyManager::GetActorsUsed() {
    return TArray<AEnemyActor*>();
}

void UEnemyManager::DestroyEnemyNew(bool _force) {
}

bool UEnemyManager::DestroyEnemyMultiFrame(bool _force, bool _init, float _intervalMs) {
    return false;
}

void UEnemyManager::DestroyEnemy(bool _force) {
}

void UEnemyManager::DestroyActorPoolsNew() {
}

void UEnemyManager::DestroyActorPools() {
}

void UEnemyManager::CreateActorPools(const TArray<FEnemyManageData>& _manageDatas, UEnemyClassNumAsset* _overrideClassNum) {
}


