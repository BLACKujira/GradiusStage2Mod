#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F031.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF031 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF031(const FObjectInitializer& ObjectInitializer);

};

