#pragma once
#include "CoreMinimal.h"
#include "W001DataAsset.h"
#include "W010DataAsset.generated.h"

UCLASS(Blueprintable)
class UW010DataAsset : public UW001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Interval_Rapid;
    
    UW010DataAsset();

};

