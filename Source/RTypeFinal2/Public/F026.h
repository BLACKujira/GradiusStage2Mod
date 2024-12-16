#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F026.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF026 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF026(const FObjectInitializer& ObjectInitializer);

};

