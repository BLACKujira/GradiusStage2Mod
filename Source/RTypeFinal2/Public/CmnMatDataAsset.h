#pragma once
#include "CoreMinimal.h"
#include "BaseDataAsset.h"
#include "CmnMatDataAsset.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class UCmnMatDataAsset : public UBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInterface*> Materials;
    
    UCmnMatDataAsset();

};

