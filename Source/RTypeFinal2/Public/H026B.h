#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H026B.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class AH026B : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* AttachComponent;
    
public:
    AH026B(const FObjectInitializer& ObjectInitializer);

};

