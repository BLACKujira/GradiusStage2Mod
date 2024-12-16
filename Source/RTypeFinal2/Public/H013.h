#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H013.generated.h"

class UH013DataAsset;

UCLASS(Blueprintable)
class AH013 : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UH013DataAsset* DataAsset;
    
public:
    AH013(const FObjectInitializer& ObjectInitializer);

};

