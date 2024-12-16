#pragma once
#include "CoreMinimal.h"
#include "P001DataAsset.h"
#include "P062DataAsset.generated.h"

UCLASS(Blueprintable)
class UP062DataAsset : public UP001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistToRobot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistToFighter;
    
    UP062DataAsset();

};

