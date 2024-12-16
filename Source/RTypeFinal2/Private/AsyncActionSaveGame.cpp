#include "AsyncActionSaveGame.h"

UAsyncActionSaveGame::UAsyncActionSaveGame() {
    this->SaveGameObject = NULL;
}

UAsyncActionSaveGame* UAsyncActionSaveGame::AsyncSaveGameToSlot(UObject* WorldContextObject, USaveGame* NewSaveGameObject, const FString& SlotName, const int32 UserIndex) {
    return NULL;
}

UAsyncActionSaveGame* UAsyncActionSaveGame::AsyncLoadGameFromSlot(UObject* WorldContextObject, const FString& SlotName, const int32 UserIndex) {
    return NULL;
}


