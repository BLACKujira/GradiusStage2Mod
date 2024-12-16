#pragma once
#include "CoreMinimal.h"
#include "MBase.h"
#include "M022.generated.h"

class UM022DataAsset;

UCLASS(Blueprintable)
class AM022 : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM022DataAsset* DataAsset;
    
public:
    AM022(const FObjectInitializer& ObjectInitializer);

};

