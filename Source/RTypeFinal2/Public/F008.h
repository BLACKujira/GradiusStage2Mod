#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F008.generated.h"

class UF008DataAsset;

UCLASS(Blueprintable)
class AF008 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UF008DataAsset* DataAssetF008;
    
public:
    AF008(const FObjectInitializer& ObjectInitializer);

};

