#pragma once
#include "CoreMinimal.h"
#include "MBase.h"
#include "M005.generated.h"

class UM005DataAsset;

UCLASS(Blueprintable)
class AM005 : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM005DataAsset* DataAsset;
    
public:
    AM005(const FObjectInitializer& ObjectInitializer);

};

