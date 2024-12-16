#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F044.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF044 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF044(const FObjectInitializer& ObjectInitializer);

};

