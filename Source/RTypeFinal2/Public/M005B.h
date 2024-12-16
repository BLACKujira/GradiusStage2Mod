#pragma once
#include "CoreMinimal.h"
#include "MBase.h"
#include "M005B.generated.h"

class UM005DataAsset;

UCLASS(Blueprintable)
class AM005B : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM005DataAsset* DataAsset;
    
public:
    AM005B(const FObjectInitializer& ObjectInitializer);

};

