#include "AsyncActionSaveData.h"

UAsyncActionSaveData::UAsyncActionSaveData() {
    this->BinaryObject = NULL;
}

UAsyncActionSaveData* UAsyncActionSaveData::AsyncSaveDataToSlot(UObject* WorldContextObject, const TArray<uint8>& NewSaveDataObject, const FString& SlotName, const int32 UserIndex) {
    return NULL;
}

UAsyncActionSaveData* UAsyncActionSaveData::AsyncSaveBinaryToSlot(UObject* WorldContextObject, USavedataBinary* NewBinaryObject, const FString& SlotName, const int32 UserIndex) {
    return NULL;
}

UAsyncActionSaveData* UAsyncActionSaveData::AsyncLoadDataFromSlot(UObject* WorldContextObject, const FString& SlotName, const int32 UserIndex) {
    return NULL;
}


