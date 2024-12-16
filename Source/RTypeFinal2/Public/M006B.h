#pragma once
#include "CoreMinimal.h"
#include "MBase.h"
#include "M006B.generated.h"

class UM006DataAsset;

UCLASS(Blueprintable)
class AM006B : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM006DataAsset* DataAsset;
    
public:
    AM006B(const FObjectInitializer& ObjectInitializer);

};

