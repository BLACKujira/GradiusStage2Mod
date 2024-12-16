#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H012_3.generated.h"

class AActor;
class UEnemyPathDataAsset;
class UEnemyPathPlayerComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AH012_3 : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathPlayerComponent* PathPlayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SearchedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SearchedComponent;
    
public:
    AH012_3(const FObjectInitializer& ObjectInitializer);

};

