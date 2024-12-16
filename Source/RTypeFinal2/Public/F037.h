#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F037.generated.h"

class UF037DataAsset;

UCLASS(Blueprintable)
class AF037 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UF037DataAsset* DataAsset;
    
public:
    AF037(const FObjectInitializer& ObjectInitializer);

};

