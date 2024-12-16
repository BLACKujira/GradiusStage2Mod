#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "F067G.generated.h"

class UMaterialInstanceDynamic;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AF067G : public APoolActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Mi_Body;
    
public:
    AF067G(const FObjectInitializer& ObjectInitializer);

};

