#pragma once
#include "CoreMinimal.h"
#include "MBase.h"
#include "M003.generated.h"

class UM003DataAsset;

UCLASS(Blueprintable)
class AM003 : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM003DataAsset* DataAsset;
    
public:
    AM003(const FObjectInitializer& ObjectInitializer);

};

