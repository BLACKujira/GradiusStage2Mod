#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "P117G.generated.h"

class UMaterialInstanceDynamic;
class UPoseableMeshComponent;

UCLASS(Blueprintable)
class AP117G : public APoolActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Mi_Body;
    
public:
    AP117G(const FObjectInitializer& ObjectInitializer);

};

