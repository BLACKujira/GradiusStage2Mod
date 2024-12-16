#include "GameLanguage.h"

UGameLanguage::UGameLanguage() {
    this->LanguageDataTable = NULL;
}

EGameLanguageId UGameLanguage::StringToLanguageId(const FString& _str) {
    return EGameLanguageId::ja;
}

void UGameLanguage::LoadData(EGameLanguageId _langId) {
}

bool UGameLanguage::LanguageIsOnlyKJE() {
    return false;
}

bool UGameLanguage::LanguageIsOnlyEJ() {
    return false;
}

bool UGameLanguage::LanguageIsOnlyCJE() {
    return false;
}

EGameLanguageId UGameLanguage::GetSuitableLanguageId(const FString& _locale) {
    return EGameLanguageId::ja;
}

FText UGameLanguage::GetLocalizedText(FName _Table, FName _id) {
    return FText::GetEmpty();
}

EGameLanguageId UGameLanguage::GetCurrentLanguageId() const {
    return EGameLanguageId::ja;
}


