#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F053.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF053 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF053(const FObjectInitializer& ObjectInitializer);

};

