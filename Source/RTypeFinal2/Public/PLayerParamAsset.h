#pragma once
#include "CoreMinimal.h"
#include "BaseDataAsset.h"
#include "PLayerParamAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UPLayerParamAsset : public UBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ColorTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MaskTex;
    
    UPLayerParamAsset();

};

