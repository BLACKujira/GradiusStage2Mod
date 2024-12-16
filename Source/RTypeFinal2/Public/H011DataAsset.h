#pragma once
#include "CoreMinimal.h"
#include "H000DataAsset.h"
#include "H011DataAsset.generated.h"

UCLASS(Blueprintable)
class UH011DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedB;
    
    UH011DataAsset();

};

