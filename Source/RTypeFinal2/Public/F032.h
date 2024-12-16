#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F032.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF032 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF032(const FObjectInitializer& ObjectInitializer);

};

