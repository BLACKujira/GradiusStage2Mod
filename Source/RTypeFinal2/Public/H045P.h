#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H045P.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AH045P : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
public:
    AH045P(const FObjectInitializer& ObjectInitializer);

};

