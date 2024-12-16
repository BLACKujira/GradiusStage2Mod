#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F022.generated.h"

class UF022DataAsset;

UCLASS(Blueprintable)
class AF022 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UF022DataAsset* DataAssetF022;
    
public:
    AF022(const FObjectInitializer& ObjectInitializer);

};

