#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H063.generated.h"

class UH063DataAsset;

UCLASS(Blueprintable)
class AH063 : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UH063DataAsset* H063Asset;
    
public:
    AH063(const FObjectInitializer& ObjectInitializer);

};

