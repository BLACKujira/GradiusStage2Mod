#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F028.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF028 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF028(const FObjectInitializer& ObjectInitializer);

};

