#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F045.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF045 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF045(const FObjectInitializer& ObjectInitializer);

};

