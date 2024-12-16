#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H032P.generated.h"

class UEnemyPathDataAsset;
class UEnemyPathPlayerComponent;

UCLASS(Blueprintable)
class AH032P : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathPlayerComponent* PathPlayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathDataAsset;
    
public:
    AH032P(const FObjectInitializer& ObjectInitializer);

};

