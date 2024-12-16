#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "H000DataAsset.h"
#include "H063C.h"
#include "H063DataAsset.generated.h"

UCLASS(Blueprintable)
class UH063DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FVector> Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> AP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FH063C> ColA;
    
    UH063DataAsset();

};

