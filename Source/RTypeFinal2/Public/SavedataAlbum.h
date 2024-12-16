#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "CustomizeSetting.h"
#include "PlayerSettingAlbumSave.h"
#include "SavedataAlbum.generated.h"

class UObject;

UCLASS(Blueprintable)
class USavedataAlbum : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSettingAlbumSave PlayerSettingAlbum;
    
public:
    USavedataAlbum();

    UFUNCTION(BlueprintCallable)
    void SetupData(UObject* _wctxt, int32 _hangarIndex);
    
    UFUNCTION(BlueprintCallable)
    void ReadDataDirect(FCustomizeSetting& _setting);
    
    UFUNCTION(BlueprintCallable)
    void ReadData(UObject* _wctxt, int32 _hangarIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitData(UObject* _wctxt);
    
    UFUNCTION(BlueprintCallable)
    void FixVersion();
    
};

