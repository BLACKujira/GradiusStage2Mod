#pragma once
#include "CoreMinimal.h"
#include "MBase.h"
#include "M012.generated.h"

class UM012DataAsset;

UCLASS(Blueprintable)
class AM012 : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM012DataAsset* DataAsset;
    
public:
    AM012(const FObjectInitializer& ObjectInitializer);

};

