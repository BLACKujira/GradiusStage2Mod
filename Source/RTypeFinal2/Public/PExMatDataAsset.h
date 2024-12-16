#pragma once
#include "CoreMinimal.h"
#include "BaseDataAsset.h"
#include "PExMatDataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UPExMatDataAsset : public UBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ColorTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MaskTex;
    
    UPExMatDataAsset();

};

