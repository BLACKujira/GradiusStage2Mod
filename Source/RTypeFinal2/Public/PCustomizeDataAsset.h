#pragma once
#include "CoreMinimal.h"
#include "BaseDataAsset.h"
#include "PCustomizeDataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UPCustomizeDataAsset : public UBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DecalMaskTex;
    
    UPCustomizeDataAsset();

};

