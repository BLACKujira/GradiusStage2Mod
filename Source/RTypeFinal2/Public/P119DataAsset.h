#pragma once
#include "CoreMinimal.h"
#include "P001DataAsset.h"
#include "P119DataAsset.generated.h"

UCLASS(Blueprintable)
class UP119DataAsset : public UP001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistToRobot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistToFighter;
    
    UP119DataAsset();

};

