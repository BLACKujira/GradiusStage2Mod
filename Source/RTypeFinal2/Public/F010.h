#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F010.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF010 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF010(const FObjectInitializer& ObjectInitializer);

};

