#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F051.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF051 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF051(const FObjectInitializer& ObjectInitializer);

};

