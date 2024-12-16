#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PlayerSettingPilotAlbumSubsetSave.h"
#include "SavedataPilotAlbumSubset.generated.h"

class UObject;

UCLASS(Blueprintable)
class USavedataPilotAlbumSubset : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSettingPilotAlbumSubsetSave PilotAlbumSubset;
    
public:
    USavedataPilotAlbumSubset();

    UFUNCTION(BlueprintCallable)
    void SetupData(UObject* _wctxt, const FString& _dataName);
    
    UFUNCTION(BlueprintCallable)
    void ReadData(UObject* _wctxt, FString& _dataName);
    
    UFUNCTION(BlueprintCallable)
    void InitData(UObject* _wctxt);
    
    UFUNCTION(BlueprintCallable)
    void FixVersion();
    
};

