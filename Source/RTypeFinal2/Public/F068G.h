#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "F068G.generated.h"

class AF068;
class UF068DataAsset;
class UMaterialInstanceDynamic;
class UPoseableMeshComponent;

UCLASS(Blueprintable)
class AF068G : public APoolActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UF068DataAsset* DataAssetF068;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Mi_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AF068* Force;
    
public:
    AF068G(const FObjectInitializer& ObjectInitializer);

};

