#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F061.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF061 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF061(const FObjectInitializer& ObjectInitializer);

};

