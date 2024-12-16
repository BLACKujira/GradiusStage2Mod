#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H019B.generated.h"

class UEnemyPathDataAsset;
class UEnemyPathPlayerComponent;

UCLASS(Blueprintable)
class AH019B : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathPlayerComponent* PathPlayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathDataAsset;
    
public:
    AH019B(const FObjectInitializer& ObjectInitializer);

};

