#include "BaseDataAsset.h"

UBaseDataAsset::UBaseDataAsset() {
}

FPrimaryAssetId UBaseDataAsset::GetPrimaryAssetId() const {
    return FPrimaryAssetId{};
}

FString UBaseDataAsset::GetIdentifierString() const {
    return TEXT("");
}


