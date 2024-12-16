#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F042.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF042 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF042(const FObjectInitializer& ObjectInitializer);

};

