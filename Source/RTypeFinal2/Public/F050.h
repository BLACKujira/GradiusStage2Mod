#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F050.generated.h"

class UF050DataAsset;

UCLASS(Blueprintable)
class AF050 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UF050DataAsset* DataAsset;
    
public:
    AF050(const FObjectInitializer& ObjectInitializer);

};

