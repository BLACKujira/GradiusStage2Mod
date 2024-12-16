#pragma once
#include "CoreMinimal.h"
#include "MBase.h"
#include "M002.generated.h"

class UM002DataAsset;

UCLASS(Blueprintable)
class AM002 : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM002DataAsset* DataAsset;
    
public:
    AM002(const FObjectInitializer& ObjectInitializer);

};

