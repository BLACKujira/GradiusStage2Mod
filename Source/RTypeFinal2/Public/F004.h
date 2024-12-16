#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F004.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF004 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF004(const FObjectInitializer& ObjectInitializer);

};

