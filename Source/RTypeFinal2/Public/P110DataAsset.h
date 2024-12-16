#pragma once
#include "CoreMinimal.h"
#include "P001DataAsset.h"
#include "P110DataAsset.generated.h"

UCLASS(Blueprintable)
class UP110DataAsset : public UP001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistToRobot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistToFighter;
    
    UP110DataAsset();

};

