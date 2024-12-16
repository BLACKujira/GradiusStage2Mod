#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H033P.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AH033P : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* UrokoMeshComponent;
    
public:
    AH033P(const FObjectInitializer& ObjectInitializer);

};

