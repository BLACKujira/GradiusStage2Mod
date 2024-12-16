#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F001.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF001 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF001(const FObjectInitializer& ObjectInitializer);

};

