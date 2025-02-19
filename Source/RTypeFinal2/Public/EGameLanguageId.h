#pragma once
#include "CoreMinimal.h"
#include "EGameLanguageId.generated.h"

UENUM(BlueprintType)
enum class EGameLanguageId : uint8 {
    ja,
    en,
    fr,
    de,
    it,
    es,
    zh_Hant,
    zh_Hans,
    ko,
    NUM,
};

