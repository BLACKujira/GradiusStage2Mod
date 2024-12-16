#pragma once
#include "CoreMinimal.h"
#include "P001DataAsset.h"
#include "P067DataAsset.generated.h"

UCLASS(Blueprintable)
class UP067DataAsset : public UP001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistToRobot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistToFighter;
    
    UP067DataAsset();

};

