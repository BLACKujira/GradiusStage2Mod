#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F020.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF020 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF020(const FObjectInitializer& ObjectInitializer);

};

