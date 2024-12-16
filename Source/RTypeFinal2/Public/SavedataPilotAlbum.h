#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PilotSetting.h"
#include "PlayerSettingPilotAlbumSave.h"
#include "SavedataPilotAlbum.generated.h"

class UObject;

UCLASS(Blueprintable)
class USavedataPilotAlbum : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSettingPilotAlbumSave PilotAlbum;
    
public:
    USavedataPilotAlbum();

    UFUNCTION(BlueprintCallable)
    void SetupDataDirect(UPARAM(Ref) FPilotSetting& _setting);
    
    UFUNCTION(BlueprintCallable)
    void SetupData(UObject* _wctxt);
    
    UFUNCTION(BlueprintCallable)
    void ReadDataDirect(FPilotSetting& _setting);
    
    UFUNCTION(BlueprintCallable)
    void ReadData(UObject* _wctxt);
    
    UFUNCTION(BlueprintCallable)
    void InitData(UObject* _wctxt);
    
    UFUNCTION(BlueprintCallable)
    void FixVersion();
    
};

