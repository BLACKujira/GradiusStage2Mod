#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "CustomizeSetting.h"
#include "PlayerSettingAlbumSubsetSave.h"
#include "SavedataAlbumSubset.generated.h"

class UObject;

UCLASS(Blueprintable)
class USavedataAlbumSubset : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSettingAlbumSubsetSave PlayerSettingAlbumSubset;
    
public:
    USavedataAlbumSubset();

    UFUNCTION(BlueprintCallable)
    void SetupData(UObject* _wctxt, const FCustomizeSetting& _setting);
    
    UFUNCTION(BlueprintCallable)
    void ReadData(UObject* _wctxt, FCustomizeSetting& _setting);
    
    UFUNCTION(BlueprintCallable)
    void InitData(UObject* _wctxt);
    
    UFUNCTION(BlueprintCallable)
    void FixVersion();
    
};

