#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameDlcDataAsset.generated.h"

class UGameDlcData;
class UGameDlcKeyAsset;

UCLASS(Blueprintable)
class UGameDlcDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameDlcKeyAsset* KeyAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGameDlcData*> Data;
    
    UGameDlcDataAsset();

};

