#pragma once
#include "CoreMinimal.h"
#include "MBase.h"
#include "M020.generated.h"

class UM020DataAsset;

UCLASS(Blueprintable)
class AM020 : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM020DataAsset* DataAsset;
    
public:
    AM020(const FObjectInitializer& ObjectInitializer);

};

