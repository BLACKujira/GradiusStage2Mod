#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F015.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF015 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF015(const FObjectInitializer& ObjectInitializer);

};

