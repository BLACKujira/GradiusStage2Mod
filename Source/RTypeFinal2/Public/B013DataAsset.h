#pragma once
#include "CoreMinimal.h"
#include "B001DataAsset.h"
#include "B013DataAsset.generated.h"

UCLASS(Blueprintable)
class UB013DataAsset : public UB001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ERC_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ERC_HL;
    
    UB013DataAsset();

};

