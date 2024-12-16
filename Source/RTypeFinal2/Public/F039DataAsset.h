#pragma once
#include "CoreMinimal.h"
#include "F001DataAsset.h"
#include "F039DataAsset.generated.h"

UCLASS(Blueprintable)
class UF039DataAsset : public UF001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApArm;
    
    UF039DataAsset();

};

