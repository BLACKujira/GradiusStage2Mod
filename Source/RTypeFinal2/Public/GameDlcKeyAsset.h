#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameDlcKeyAsset.generated.h"

UCLASS(Blueprintable)
class UGameDlcKeyAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> KeyTable;
    
    UGameDlcKeyAsset();

};

