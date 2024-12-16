#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F006.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF006 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF006(const FObjectInitializer& ObjectInitializer);

};

