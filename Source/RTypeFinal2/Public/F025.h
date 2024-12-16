#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F025.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF025 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF025(const FObjectInitializer& ObjectInitializer);

};

