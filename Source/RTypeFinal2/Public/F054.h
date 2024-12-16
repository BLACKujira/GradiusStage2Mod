#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F054.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF054 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF054(const FObjectInitializer& ObjectInitializer);

};

