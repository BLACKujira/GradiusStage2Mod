#pragma once
#include "CoreMinimal.h"
#include "MBase.h"
#include "M016.generated.h"

class UM016DataAsset;

UCLASS(Blueprintable)
class AM016 : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM016DataAsset* DataAsset;
    
public:
    AM016(const FObjectInitializer& ObjectInitializer);

};

