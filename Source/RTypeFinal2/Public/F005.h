#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F005.generated.h"

class UF005DataAsset;

UCLASS(Blueprintable)
class AF005 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UF005DataAsset* DataAssetF005;
    
public:
    AF005(const FObjectInitializer& ObjectInitializer);

};

