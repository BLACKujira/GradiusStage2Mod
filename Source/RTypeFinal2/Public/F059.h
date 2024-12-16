#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F059.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF059 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF059(const FObjectInitializer& ObjectInitializer);

};

