#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F038.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF038 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF038(const FObjectInitializer& ObjectInitializer);

};

