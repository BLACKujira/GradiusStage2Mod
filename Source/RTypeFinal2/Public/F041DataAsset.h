#pragma once
#include "CoreMinimal.h"
#include "F001DataAsset.h"
#include "F041DataAsset.generated.h"

UCLASS(Blueprintable)
class UF041DataAsset : public UF001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float RingR[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float RingHH[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float RingAP[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccW;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecW;
    
    UF041DataAsset();

};

