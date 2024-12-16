#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "E7520G.generated.h"

class AE7520;
class UMaterialInstanceDynamic;
class UPoseableMeshComponent;

UCLASS(Blueprintable)
class AE7520G : public APoolActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Mi_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE7520* Parent;
    
public:
    AE7520G(const FObjectInitializer& ObjectInitializer);

};

