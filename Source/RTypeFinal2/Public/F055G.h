#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "F055G.generated.h"

class UMaterialInstanceDynamic;
class UPoseableMeshComponent;

UCLASS(Blueprintable)
class AF055G : public APoolActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Mi_Body;
    
public:
    AF055G(const FObjectInitializer& ObjectInitializer);

};

