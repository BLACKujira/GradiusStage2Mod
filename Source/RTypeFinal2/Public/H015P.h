#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H015P.generated.h"

class UEnemyPathDataAsset;
class UEnemyPathPlayerComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AH015P : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathPlayerComponent* PathPlayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
public:
    AH015P(const FObjectInitializer& ObjectInitializer);

};

