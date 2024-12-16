#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F046.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF046 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF046(const FObjectInitializer& ObjectInitializer);

};

