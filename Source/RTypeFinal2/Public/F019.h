#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F019.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF019 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF019(const FObjectInitializer& ObjectInitializer);

};

