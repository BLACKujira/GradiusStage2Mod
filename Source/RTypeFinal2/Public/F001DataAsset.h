#pragma once
#include "CoreMinimal.h"
#include "ForceDataAsset.h"
#include "F001DataAsset.generated.h"

UCLASS(Blueprintable)
class UF001DataAsset : public UForceDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dummy;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float RearCmnOfs[3];
    
    UF001DataAsset();

};

