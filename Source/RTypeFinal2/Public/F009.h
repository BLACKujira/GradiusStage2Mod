#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F009.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF009 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF009(const FObjectInitializer& ObjectInitializer);

};

