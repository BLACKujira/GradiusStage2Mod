#pragma once
#include "CoreMinimal.h"
#include "P001DataAsset.h"
#include "P064DataAsset.generated.h"

UCLASS(Blueprintable)
class UP064DataAsset : public UP001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistToRobot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistToFighter;
    
    UP064DataAsset();

};

