#include "AssetCache.h"

UAssetCache::UAssetCache() {
    this->CurrentDecal = NULL;
    this->PlayerDefs = NULL;
    this->GalleryData = NULL;
    this->BydoData = NULL;
    this->ManualData = NULL;
    this->CurrentGarageIndex = 0;
}

void UAssetCache::SetPlayerDefs(UPlayerDefs* _defs) {
}

void UAssetCache::SetPlayerCache(const TArray<UObject*>& _newData) {
}

void UAssetCache::SetManualData(UManualData* _defs) {
}

void UAssetCache::SetGhostCache(const TArray<UObject*>& _newData) {
}

void UAssetCache::SetGalleryData(UGalleryData* _defs) {
}

void UAssetCache::SetCurrentGarageIndex(int32 _index) {
}

void UAssetCache::SetCurrentDecalTex(UTextureRenderTarget2D* _decalTex) {
}

void UAssetCache::SetBydoData(UBydoData* _defs) {
}

UObject* UAssetCache::GetWorldAsObject() {
    return NULL;
}

UPlayerDefs* UAssetCache::GetPlayerDefs() {
    return NULL;
}

TArray<UObject*> UAssetCache::GetPlayerCache() {
    return TArray<UObject*>();
}

UManualData* UAssetCache::GetManualData() {
    return NULL;
}

TArray<UObject*> UAssetCache::GetGhostCache() {
    return TArray<UObject*>();
}

UGalleryData* UAssetCache::GetGalleryData() {
    return NULL;
}

int32 UAssetCache::GetCurrentGarageIndex() {
    return 0;
}

UTextureRenderTarget2D* UAssetCache::GetCurrentDecalTex() {
    return NULL;
}

UBydoData* UAssetCache::GetBydoData() {
    return NULL;
}

UTextureRenderTarget2D* UAssetCache::CreateIndependentRenderTarget2D(int32 Width, int32 Height, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor) {
    return NULL;
}

void UAssetCache::ClearPlayerCache() {
}

void UAssetCache::ClearGhostCache() {
}

void UAssetCache::AddPlayerCache(const TArray<UObject*>& _newData) {
}


