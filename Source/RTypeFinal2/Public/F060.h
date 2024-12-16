#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F060.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF060 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF060(const FObjectInitializer& ObjectInitializer);

};

