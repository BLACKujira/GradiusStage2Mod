#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F048.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF048 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF048(const FObjectInitializer& ObjectInitializer);

};

