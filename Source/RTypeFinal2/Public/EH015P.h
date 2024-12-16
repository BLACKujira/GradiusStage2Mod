#pragma once
#include "CoreMinimal.h"
#include "EHXXXXE.h"
#include "EH015P.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AEH015P : public AEHXXXXE {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
public:
    AEH015P(const FObjectInitializer& ObjectInitializer);

};

