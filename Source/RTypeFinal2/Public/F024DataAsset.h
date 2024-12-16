#pragma once
#include "CoreMinimal.h"
#include "F001DataAsset.h"
#include "F024DataAsset.generated.h"

UCLASS(Blueprintable)
class UF024DataAsset : public UF001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RateForSE_ToFighter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RateForSE_ToForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MorphT;
    
    UF024DataAsset();

};

