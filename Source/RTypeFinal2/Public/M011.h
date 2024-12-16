#pragma once
#include "CoreMinimal.h"
#include "MBase.h"
#include "M011.generated.h"

class UM011DataAsset;

UCLASS(Blueprintable)
class AM011 : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM011DataAsset* DataAsset;
    
public:
    AM011(const FObjectInitializer& ObjectInitializer);

};

