#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F003.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AF003 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AF003(const FObjectInitializer& ObjectInitializer);

};

