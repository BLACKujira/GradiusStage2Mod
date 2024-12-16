#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "BaseDataAsset.generated.h"

UCLASS(Blueprintable)
class UBaseDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetType BaseDataAssetType;
    
    UBaseDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPrimaryAssetId GetPrimaryAssetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetIdentifierString() const;
    
};

