#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F033.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF033 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF033(const FObjectInitializer& ObjectInitializer);

};

