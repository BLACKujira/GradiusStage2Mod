#pragma once
#include "CoreMinimal.h"
#include "B001DataAsset.h"
#include "B005DataAsset.generated.h"

UCLASS(Blueprintable)
class UB005DataAsset : public UB001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnASpd;
    
    UB005DataAsset();

};

