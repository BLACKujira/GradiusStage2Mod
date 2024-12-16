#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F014.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF014 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF014(const FObjectInitializer& ObjectInitializer);

};

