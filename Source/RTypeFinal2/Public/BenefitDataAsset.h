#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BenefitDataAsset.generated.h"

class UBenefitData;
class UBenefitKeyAsset;

UCLASS(Blueprintable)
class UBenefitDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBenefitKeyAsset* KeyAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBenefitData*> Data;
    
    UBenefitDataAsset();

};

