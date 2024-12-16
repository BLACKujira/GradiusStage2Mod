#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "H025Corolla.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AH025Corolla : public APoolActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
public:
    AH025Corolla(const FObjectInitializer& ObjectInitializer);

};

