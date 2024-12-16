#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F052.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF052 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF052(const FObjectInitializer& ObjectInitializer);

};

