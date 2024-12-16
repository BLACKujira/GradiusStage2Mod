#include "SavedataLib.h"
#include "Templates/SubclassOf.h"

USavedataLib::USavedataLib() {
}

TSubclassOf<USavedata> USavedataLib::GetSavedataClass() {
    return NULL;
}

FString USavedataLib::GetMetaTitlePilotSetting(UObject* WorldContextObject, int32 _slotIndex, const FPilotSetting& _setting) {
    return TEXT("");
}

FString USavedataLib::GetMetaTitle(UObject* WorldContextObject, int32 _slotIndex, const FCustomizeSetting& _setting) {
    return TEXT("");
}


