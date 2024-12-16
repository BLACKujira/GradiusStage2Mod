#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F018.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF018 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF018(const FObjectInitializer& ObjectInitializer);

};

