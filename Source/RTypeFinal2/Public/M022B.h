#pragma once
#include "CoreMinimal.h"
#include "MBase.h"
#include "M022B.generated.h"

class UM022DataAsset;

UCLASS(Blueprintable)
class AM022B : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM022DataAsset* DataAsset;
    
public:
    AM022B(const FObjectInitializer& ObjectInitializer);

};

