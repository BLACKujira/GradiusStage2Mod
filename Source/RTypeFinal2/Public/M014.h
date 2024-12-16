#pragma once
#include "CoreMinimal.h"
#include "MBase.h"
#include "M014.generated.h"

class UM014DataAsset;

UCLASS(Blueprintable)
class AM014 : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM014DataAsset* DataAsset;
    
public:
    AM014(const FObjectInitializer& ObjectInitializer);

};

