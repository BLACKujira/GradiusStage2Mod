#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F043.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF043 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF043(const FObjectInitializer& ObjectInitializer);

};

