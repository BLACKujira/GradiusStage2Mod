#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EGameLanguageId.h"
#include "GameLanguage.generated.h"

class UDataTable;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UGameLanguage : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LanguageDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UDataTable*> LanguageDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> ReplaceData;
    
public:
    UGameLanguage();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameLanguageId StringToLanguageId(const FString& _str);
    
    UFUNCTION(BlueprintCallable)
    void LoadData(EGameLanguageId _langId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LanguageIsOnlyKJE();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LanguageIsOnlyEJ();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LanguageIsOnlyCJE();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameLanguageId GetSuitableLanguageId(const FString& _locale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLocalizedText(FName _Table, FName _id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameLanguageId GetCurrentLanguageId() const;
    
};

