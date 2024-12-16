#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H045.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AH045 : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
public:
    AH045(const FObjectInitializer& ObjectInitializer);

};

