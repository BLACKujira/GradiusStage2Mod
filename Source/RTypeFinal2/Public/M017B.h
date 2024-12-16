#pragma once
#include "CoreMinimal.h"
#include "MBase.h"
#include "M017B.generated.h"

class UM017DataAsset;

UCLASS(Blueprintable)
class AM017B : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM017DataAsset* DataAsset;
    
public:
    AM017B(const FObjectInitializer& ObjectInitializer);

};

