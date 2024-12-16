#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F023.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF023 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF023(const FObjectInitializer& ObjectInitializer);

};

