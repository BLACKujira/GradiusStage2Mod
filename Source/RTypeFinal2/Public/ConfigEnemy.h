#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LightConfigData.h"
#include "ConfigEnemy.generated.h"

UCLASS(Blueprintable, Config=Game)
class UConfigEnemy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightConfigData ChargeEff_LightData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLightConfigData> EH001_LightData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLightConfigData> EH002_LightData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLightConfigData> EH008_LightData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLightConfigData> EH010_LightData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLightConfigData> EH011_LightData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLightConfigData> EH019_LightData;
    
    UConfigEnemy();

};

