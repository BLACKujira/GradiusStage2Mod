#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F064.generated.h"

class UF064DataAsset;

UCLASS(Blueprintable)
class AF064 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UF064DataAsset* DataAssetF064;
    
public:
    AF064(const FObjectInitializer& ObjectInitializer);

};

