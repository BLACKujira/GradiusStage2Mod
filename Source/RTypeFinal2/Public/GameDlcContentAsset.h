#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameDlcContentAsset.generated.h"

UCLASS(Blueprintable)
class UGameDlcContentAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ContentTable;
    
    UGameDlcContentAsset();

};

