#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "F029G.generated.h"

class UMaterialInstanceDynamic;
class UPoseableMeshComponent;

UCLASS(Blueprintable)
class AF029G : public APoolActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Mi_Body;
    
public:
    AF029G(const FObjectInitializer& ObjectInitializer);

};

