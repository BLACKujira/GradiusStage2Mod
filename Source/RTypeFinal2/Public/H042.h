#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H042.generated.h"

class UH042DataAsset;

UCLASS(Blueprintable)
class AH042 : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UH042DataAsset* H042Asset;
    
public:
    AH042(const FObjectInitializer& ObjectInitializer);

};

