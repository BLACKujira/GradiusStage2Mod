#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F013.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF013 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF013(const FObjectInitializer& ObjectInitializer);

};

