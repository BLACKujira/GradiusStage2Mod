#include "GameSavedata.h"
#include "Templates/SubclassOf.h"

UGameSavedata::UGameSavedata() {
    this->ThumbnailBinary = NULL;
    this->IconImageBinary = NULL;
}

FString UGameSavedata::ToString_GameSaveExistsResult(EGameSaveExistsResult _result) {
    return TEXT("");
}

FString UGameSavedata::ToString_GameSaveCopyResult(EGameSaveCopyResult _result) {
    return TEXT("");
}

bool UGameSavedata::SetThumbnailTextureRawData(const TArray<uint8>& _rawData) {
    return false;
}

USavedataBinary* UGameSavedata::SetThumbnailTexture(UTextureRenderTarget2D* _thumbImage, USaveGame* _data) {
    return NULL;
}

void UGameSavedata::SetNotSaveFlag(bool _flag) {
}

void UGameSavedata::SetMetaTitle(const FString& _str) {
}

void UGameSavedata::SetMetaSubTitle(const FString& _str) {
}

void UGameSavedata::SetMetaDetail(const FString& _str) {
}

bool UGameSavedata::SetIconImageTexture(UTextureRenderTarget2D* _iconImage) {
    return false;
}

bool UGameSavedata::SetIconImageRawData(const TArray<uint8>& _rawData) {
    return false;
}

FString UGameSavedata::SaveNameRemoveThumbnail(const FString& _saveName) {
    return TEXT("");
}

FString UGameSavedata::SaveNameRemoveIcon(const FString& _saveName) {
    return TEXT("");
}

bool UGameSavedata::SaveNameIsThumbnail(const FString& _saveName) {
    return false;
}

bool UGameSavedata::SaveNameIsPilotAlbum(const FString& _saveName) {
    return false;
}

bool UGameSavedata::SaveNameIsIcon(const FString& _saveName) {
    return false;
}

bool UGameSavedata::SaveNameIsAlbum(const FString& _saveName) {
    return false;
}

bool UGameSavedata::SaveGameToSlot(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex) {
    return false;
}

bool UGameSavedata::SaveGameToMemory(USaveGame* SaveGameObject, TArray<uint8>& OutSaveData) {
    return false;
}

bool UGameSavedata::SaveDataToSlot(const TArray<uint8>& InSaveData, const FString& SlotName, const int32 UserIndex) {
    return false;
}

void UGameSavedata::ReleaseThumbnailIconImage() {
}

USaveGame* UGameSavedata::LoadGameFromSlot(const FString& SlotName, const int32 UserIndex) {
    return NULL;
}

USaveGame* UGameSavedata::LoadGameFromMemory(const TArray<uint8>& InSaveData) {
    return NULL;
}

bool UGameSavedata::LoadDataFromSlot(TArray<uint8>& OutSaveData, const FString& SlotName, const int32 UserIndex) {
    return false;
}

bool UGameSavedata::GetThumbnailTexture(const TArray<uint8>& _rawData, TSoftObjectPtr<UTexture2D>& _iconImage, USaveGame*& _data) {
    return false;
}

FString UGameSavedata::GetSuffixThumbnail() {
    return TEXT("");
}

FString UGameSavedata::GetSuffixIcon() {
    return TEXT("");
}

FString UGameSavedata::GetStringUseTexture() {
    return TEXT("");
}

FString UGameSavedata::GetPrefixPilotAlbum() {
    return TEXT("");
}

FString UGameSavedata::GetPrefixAlbum() {
    return TEXT("");
}

void UGameSavedata::GetPlatformSaveIconSize(int32& _x, int32& _y) {
}

bool UGameSavedata::GetNotSaveFlag() const {
    return false;
}

EGameSaveExistsResult UGameSavedata::DoesSaveGameExistWithResult(const FString& SlotName, const int32 UserIndex) {
    return EGameSaveExistsResult::OK;
}

bool UGameSavedata::DoesSaveGameExist(const FString& SlotName, const int32 UserIndex) {
    return false;
}

bool UGameSavedata::DeleteGameInSlot(const FString& SlotName, const int32 UserIndex) {
    return false;
}

USaveGame* UGameSavedata::CreateSaveGameObject(TSubclassOf<USaveGame> SaveGameClass) {
    return NULL;
}

TArray<uint8> UGameSavedata::ConvertTexture(UTexture* Img) {
    return TArray<uint8>();
}

UTexture2D* UGameSavedata::ConvertRawData(TArray<uint8> rawData) {
    return NULL;
}

void UGameSavedata::ClearMetaData() {
}


