#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F016.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF016 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF016(const FObjectInitializer& ObjectInitializer);

};

