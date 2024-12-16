#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "BenefitSave.h"
#include "GameFlagSave.h"
#include "GameOptionSave.h"
#include "GamePointSave.h"
#include "GameRecordSave.h"
#include "GameResourceSave.h"
#include "PlayerSettingsSave.h"
#include "Savedata.generated.h"

class UObject;

UCLASS(Blueprintable)
class USavedata : public USaveGame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameFlagSave GameFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOptionSave GameOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGamePointSave GamePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRecordSave GameRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameResourceSave GameResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSettingsSave PlayerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBenefitSave Benefit;
    
public:
    USavedata();

    UFUNCTION(BlueprintCallable)
    void SetupData(UObject* _wctxt);
    
    UFUNCTION(BlueprintCallable)
    void ReadData(UObject* _wctxt);
    
    UFUNCTION(BlueprintCallable)
    void InitData(UObject* _wctxt, bool _forSave);
    
    UFUNCTION(BlueprintCallable)
    void FixVersion();
    
};

