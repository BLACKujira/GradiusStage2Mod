#pragma once
#include "CoreMinimal.h"
#include "MBase.h"
#include "M012B.generated.h"

class UM012DataAsset;

UCLASS(Blueprintable)
class AM012B : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM012DataAsset* DataAsset;
    
public:
    AM012B(const FObjectInitializer& ObjectInitializer);

};

