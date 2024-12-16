#pragma once
#include "CoreMinimal.h"
#include "W001DataAsset.h"
#include "W002DataAsset.generated.h"

UCLASS(Blueprintable)
class UW002DataAsset : public UW001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dummy2;
    
    UW002DataAsset();

};

