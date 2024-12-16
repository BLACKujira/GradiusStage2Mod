#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F017.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF017 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF017(const FObjectInitializer& ObjectInitializer);

};

