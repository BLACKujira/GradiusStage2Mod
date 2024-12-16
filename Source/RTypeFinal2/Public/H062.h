#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H062.generated.h"

class UH062DataAsset;

UCLASS(Blueprintable)
class AH062 : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UH062DataAsset* H062Asset;
    
public:
    AH062(const FObjectInitializer& ObjectInitializer);

};

