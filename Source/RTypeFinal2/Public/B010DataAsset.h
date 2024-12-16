#pragma once
#include "CoreMinimal.h"
#include "B001DataAsset.h"
#include "B010DataAsset.generated.h"

UCLASS(Blueprintable)
class UB010DataAsset : public UB001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dummy2;
    
    UB010DataAsset();

};

